#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet except letters "q" and "e"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}

