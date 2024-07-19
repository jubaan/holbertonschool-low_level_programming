#include <stdio.h>
#include "main.h"

/**
 * print_numbers - This function prints the numbers from 0 to 9
 *
 * Return: Void
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}	

	printf("\n");
	return (void);
}

