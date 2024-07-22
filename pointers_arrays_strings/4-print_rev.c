#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		write(1, &s[len - 1], 1);
		len--;
	}
	write(1, "\n", 1);
}

/**
 * _strlen - Returns the length of a string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
