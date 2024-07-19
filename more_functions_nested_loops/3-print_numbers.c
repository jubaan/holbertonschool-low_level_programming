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
		_putchar(i + 47);
		i++;
	}	

	_putchar("\n");
	return (void);
}

