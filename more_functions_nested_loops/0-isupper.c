#include "main.h"

/**
 * _isupper - This function checks for uppercase characters
 * @c - character to review
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'B')
		return (1);
	else
		return (0);
}

