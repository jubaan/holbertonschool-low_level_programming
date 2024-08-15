#include "main.h"
#include <unistd.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}

	return (0);
}
