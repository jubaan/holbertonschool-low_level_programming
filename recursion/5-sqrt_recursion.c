#include "main.h"

int _sqrt_helper(int n, int l, int h);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of a number or -1 if number doesn't have
 * a natural
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);

	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: number
 * @l: lower limit
 * @h: upper limit
 *
 * Return: natural square root or -1 if number doesn't have a natural
 */

int _sqrt_helper(int n, int l, int h)
{
	int m;

	if (l > h)
		return (-1);

	m = (l + h) / 2;

	if (m == 0 || m > n / m)
		return (_sqrt_helper(n, l, m - 1));

	if (m * m == n)
		return (m);

	return (_sqrt_helper(n, l, m - 1));
}
