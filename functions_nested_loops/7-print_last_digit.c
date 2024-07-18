#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - This function gets the last digit of a number
 * @n: This number is used to obtain the last digit.
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int r;
	char c;

	if (n == INT_MIN)
		r = 8;
	else if (n < 0)
		n = -n;

	r = n % 10;
	c = r + '0';

	write(1, &c, 1);
	return (r);
}

