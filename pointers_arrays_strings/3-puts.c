#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string
 * @str: string
 */

void _puts(char *str)
{
	int i = 0;

	while (i < *str)
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, '\n', 1);
}
