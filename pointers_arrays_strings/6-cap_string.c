#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else
			str[i] = str[i];

		i++;
	}

	return (str);
}
