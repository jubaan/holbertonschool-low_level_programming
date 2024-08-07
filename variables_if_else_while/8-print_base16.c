#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers from 0 to 9,
 * with the use of -putchar- function and no -char- varyable type
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 16)
	{
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
		n++;
	}
	putchar('\n');
	return (0);
}

