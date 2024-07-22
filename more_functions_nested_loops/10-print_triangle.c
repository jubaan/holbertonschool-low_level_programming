#include "main.h";

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = size - 1;
			k = 0;

			while (j > i)
			{
				_putchar(' ');
				j--;
			}

			while (k <= i)
			{
				_putchar('#');
				k++;
			}

			_putchar('\n');
			i++;
		}
	}
}
