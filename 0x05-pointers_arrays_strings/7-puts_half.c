#include "holberton.h"
/**
 * puts_half - Prints second half of a string
 * @str: String which second half will be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != 0)
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (n > 0)
	{
		_putchar(str[len - n]);
		n--;
	}

	_putchar('\n');
}
