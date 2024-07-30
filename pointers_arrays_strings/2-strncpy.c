#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytes from src to copy
 *
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (dest[i] == '\0')
		dest[i] = '\0';

	return (dest);
}
