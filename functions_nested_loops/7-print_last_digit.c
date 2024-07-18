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
	if (n < 0)
		n = -n;

	write(1, (n % 10) + '0', 1);
	return (n % 10);
}

