#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area destination
 * @src: source memory area
 * @n: bytes of memory to copy
 *
 * Return: a pointer to "dest"
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
