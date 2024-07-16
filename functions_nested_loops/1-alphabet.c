#include "main.h"
#include "unistd.h"

void _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (a < 'z')
		{
			_putchar(letter);
			a++;
		}
		i++;
	}
	return (0);
}

