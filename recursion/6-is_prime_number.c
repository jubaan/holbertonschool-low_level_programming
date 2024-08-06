#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}

/**
 * is_prime - checks if a number is a prime number
 * @n: number
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}
