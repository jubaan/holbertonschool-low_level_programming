#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse
 * @s: string
 */

void print_rev(*s)
{
	int len = _strlen(*s);

	while (*s[len] >= 0)
	{
		write(1, s[len], 1);
		len--;
	}

	write(1, "\n", 1);
}
