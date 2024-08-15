#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int addend_1;
	int addend_2;
	int sum;
	int i = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < argc)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		i++;
	}

	addend_1 = atoi(argv[1]);
	addend_2 = atoi(argv[2]);
	sum = addend_1 + addend_2;

	printf("%d\n", product);

	return (0);
}
