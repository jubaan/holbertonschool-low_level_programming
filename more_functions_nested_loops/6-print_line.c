#include "main.h"

/**
 * print_line - This function draws a straight line in the terminal
 * @n: Number of repeated underscores
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
}

