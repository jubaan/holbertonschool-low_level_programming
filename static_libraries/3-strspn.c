#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of "s" which consist
 * only of bytes from "accept"
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char *start = accept;

	while (*s)
	{
		accept = start;

		while (*accept)
		{
			if (*s == *accept)
				break;

			accept++;
		}

		if (!*accept)
			break;

		i++;
		s++;
	}

	return (i);
}

