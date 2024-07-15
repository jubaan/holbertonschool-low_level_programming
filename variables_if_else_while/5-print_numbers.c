#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	return (0);
}

