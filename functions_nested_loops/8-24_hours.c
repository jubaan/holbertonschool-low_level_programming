#include "main.h"

/**
 * jack_bauer - This functions prints the time from 00:00 to 23:59
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours < 24)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');

		minutes++;

		if (minutes == 60)
		{
			minutes = 0;
			hours++;
		}
	}
}

