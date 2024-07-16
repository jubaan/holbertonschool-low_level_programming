#include "main.c"

/**
 * main - Entry point
 *
 * Description: This program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < sizeof(str[]) - 1)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
	return (0);
}

