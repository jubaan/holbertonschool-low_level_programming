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
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;
	write(1, &last_digit, 1);
	return (last_digit);
}

