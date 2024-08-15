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

	if (argc < 2)
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
			j++;
		}

		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
