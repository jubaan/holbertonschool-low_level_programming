#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This function prints all natural numbers from "n" to 98
 * @n: starting point, shouldn't be greater than 98
 *
 * Return: Void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%0d", n);
			n--;
		}
	}

	while (n <= 98)
	{
		printf("%0d", n);
		n++;
	}
	_putchar('\n');
}

