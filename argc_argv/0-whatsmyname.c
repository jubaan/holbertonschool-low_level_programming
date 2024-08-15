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
	write(1, &argv[argc - 1], 1);

	return (0);
}
