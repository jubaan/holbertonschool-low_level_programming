#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multiplicand = atoi(argv[1]);
	int multiplier = atoi(argv[2]);
	int product = multiplicand * multiplier;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", product);

	return (0);
}
