#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints "_putchar"
 *
 * Return: void
 */

void _putchar(void)
{
	char str[9] = "_putchar";
	size_t i = 0;

	while (i < sizeof(str) - 1)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

