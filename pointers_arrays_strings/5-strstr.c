#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring, or "NULL" if
 * the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			j = 0;

			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}

			if (needle[j] == 0)
				return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
