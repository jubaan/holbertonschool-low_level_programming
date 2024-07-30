#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;

			if (num > (INT_MAX - (s[i] - '0')) / 10)
			{
				return (sign == 1) ? INT_MAX : INT_MIN;
			}

			num = num * 10 + (s[i] - '0');
		}
		else if (started)
		{
			break;
		}

		i++;
	}

	return (num * sign);
}
