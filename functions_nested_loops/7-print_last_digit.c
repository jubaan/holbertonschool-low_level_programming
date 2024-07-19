#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_last_digit - This function gets the last digit of a number
 * @n: This number is used to obtain the last digit.
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
		if (n < 0)
			n = -n;

		last_digit = n % 10;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}

