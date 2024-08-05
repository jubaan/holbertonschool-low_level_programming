#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (i * i == n)
	{
		int result = i;

		i = 1;

		return (result);
	}

	if (i * i > n)
	{
		i = 1;

		return (-1);
	}

	i++;
	return (_sqrt_recursion(n));
}
