#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len >= 0)
	{
		write(1, &s[len], 1);
		len--;
	}

	write(1, "\n", 1);
}
