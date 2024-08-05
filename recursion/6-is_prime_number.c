#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		i = 2;
		return (0);
	}

	if (i * i > n)
	{
		i = 2;
		return (1);
	}

	if (n % i == 0)
	{
		i = 2;
		return (0);
	}

	i++;

	return (is_prime_number(n));
}
