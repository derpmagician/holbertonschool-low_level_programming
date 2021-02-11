#include "holberton.h"

/**
 * more_numbers - prints from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
