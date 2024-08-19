#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to the duplicated string, or NULL if it fails,
 * or NULL if str = NULL
 */

char *_strdup(char *str)
{
		char *array;
		unsigned int i = 0;
		unsigned int size = 0;

		if (str == NULL)
			return (NULL);

		while (str[size] != '\0')
			size++;

		array = malloc(size * sizeof(char) + 1);

		if (array == NULL)
			return (NULL);

		while (i < size)
		{
			array[i] = str[i];
			i++;
		}

		array[i] = '\0';

		return (array);
}
