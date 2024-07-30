#include "main.h"

#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from src to concatenate
 *
 * Return: retunrs concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (dest[i] == '\0';)
		dest[i] = '\0';

	return (dest);
}
