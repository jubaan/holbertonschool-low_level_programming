#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase and uppercase,
 * followed by at new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	char upper_letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (upper_letter <= 'Z')
	{
		putchar(upper_letter);
		upper_letter++;
	}
	putchar('\n');
	return (0);
}

