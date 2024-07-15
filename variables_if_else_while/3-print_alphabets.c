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

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(toupper(letter));
		letter++;
	}
	putchar('\n');
	return (0);
}

