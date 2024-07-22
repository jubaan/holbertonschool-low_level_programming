#include "main.h"

/**
 * swap - Swaps the values of two integers
 * @a: First integer
 * @b: Second Integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

