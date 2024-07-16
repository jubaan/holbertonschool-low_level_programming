#include "main.h"

/**
 * print_alphabet_x10 - This function prints ten times the
 * alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}

