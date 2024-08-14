#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string
 * @str: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	write(1, str, i);
	write(1, "\n", 1);
}
