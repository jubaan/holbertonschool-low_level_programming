#include "main.h"

/**
 * _islower - This function checks for lowercase characters
 * @c: Stores the character to be reviewed
 *
 * Return: 1 for TRUE or 0 for FALSE
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}

