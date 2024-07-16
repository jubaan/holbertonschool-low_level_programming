#incluide "main.c"

/**
 * main - Entry point
 *
 * Description: This program writes each letter to the standar output
 * _putchar: Writes each string character to the stdout
 * @c: String character
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
	return (write(1, &c, 1));

