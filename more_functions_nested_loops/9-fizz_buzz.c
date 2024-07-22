#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else (i % 5 == 0)
			printf("Buzz");

		i++;
	}

	printf("\n");
}
