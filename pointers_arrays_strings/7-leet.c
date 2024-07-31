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

	while (str[i])
	{
		j = 0;

		while (str[j])
		{
			if (str[i] == s[j])
				str[i] = r[j];

			j++;
		}

		i++;
	}

	return (s);
}
