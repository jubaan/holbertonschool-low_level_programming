#include "main.h"

/**
 * print_diagonal - This function draws a diagonal line
 * on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i <= n)
	{

		if (j == n) 
		{
			_putchar('\\');
			_putchar('\n');
		}

		_putchar(' ');
		print_diagonal(n--);
		i++;
	}
	_putchar('\n');
}

