#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints c to stdout
 * @c: string to print5
 *
 * Return: On success 1. or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
