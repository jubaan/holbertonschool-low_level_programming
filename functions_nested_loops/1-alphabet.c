#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter < 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}

