#include "main.h"
#include <stdio.h>

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
		while (minutes < 60)
		{
			printf("%02d:%02d\n", hours, minutes);
			minutes++;
		}
		hours++;
	}
}

