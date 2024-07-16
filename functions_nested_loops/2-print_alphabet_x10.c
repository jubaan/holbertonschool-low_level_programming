#include "main.h"

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}

