#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to find
 *
 * Return: a pointer to the first occurence of the character "c" or "NULL"
 * if is not found
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			break;

		s++;
	}

	return (NULL);
}
