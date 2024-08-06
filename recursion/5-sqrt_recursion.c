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

	return (_sqrt_recursion(n));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: number
 * @l: lower limit
 * @h: upper limit
 *
 * Return: natural square root or -1 if number doesn't have a natural
 */

int  _sqrt_helper(int n, int l, int h)
{
	if (l > h)
		return (-1);

	int m;

	m = (l + h) / 2;

	if (m * m == n)
		return (m);
	if (l >= h)
		return (-1);
	if (m * m < n)
		return (_sqrt_helper(n, m + 1, h));

	return (_sqrt_helper(n, l, m - 1));
}
