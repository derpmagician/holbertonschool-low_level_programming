#include "holberton.h"
/**
 * print_numbers - prints 0 to 9 except 2 and 4
 * Return: void
 */
void print_numbers(void);
{
	int c;

	for (c = "0"; < "10"; c++)
		if (c != 2 || c != 4)
			_putchar(c);
	_putchar("\n");
}
