#include "main.h"

/**
 * _puts - Prints a string
 * @str: string
 */

void _puts(char *str)
{
	for (int i = 0; i < *str; i++)
		write(1, *str[1], 1);
	write(1, '\n', 1);
}

