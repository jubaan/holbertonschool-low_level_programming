#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multiplicand;
	int multiplier;
	int product;

	if (argc != 3)
	{
		print("Error\n");
		return (1);
	}

	multiplicand = atoi(argv[1]);
	multiplier = atoi(argv[2]);
	product = multiplicand * multiplier;

	printf("%d\n", product);

	return (0);
}
