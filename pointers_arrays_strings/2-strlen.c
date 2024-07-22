#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (sizeof(*s) > 0)
		len++;

	return (len);
}
