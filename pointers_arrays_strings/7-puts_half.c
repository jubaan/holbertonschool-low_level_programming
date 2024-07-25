#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int half;
	int n;

	while (len != '\0')
		len++;

	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len - 1) / 2;
	}

	while (half != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
