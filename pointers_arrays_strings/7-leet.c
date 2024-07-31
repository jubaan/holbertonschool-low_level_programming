#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i;
	int j;
	char *s = "aAeEoOtTlL";
	char *r = "4433007711";

	while (s[i])
	{
		j = 0;

		while (s[j])
		{
			if (s[i] == s[j])
				s[i] = r[j];

			j++;
		}

		i++;
	}

	return (s);
}
