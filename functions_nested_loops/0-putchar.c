#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */

char _putchar(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < sizeof(str[]) - 1)
	{
		write(1, str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

