#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int j;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(&argv[i][j]);
			j++;
		}

		i++;
	}

	return (0);
}
