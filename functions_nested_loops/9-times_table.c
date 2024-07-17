#include 'main.h'

/**
 * times_table - This function prints the 9 times table, starting with 0
 *
 * Return: Void
 */

void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			int p = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(',');
			}

			if (p < 10)
			{
				_putchar(' ');
			}

			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}
}

