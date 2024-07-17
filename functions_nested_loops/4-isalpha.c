#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character
 * @c: is the char to be evaluated
 *
 * Return: Always 0 (Success)
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

