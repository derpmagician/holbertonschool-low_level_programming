#include "holberton.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str);
		i++;
	}
	_putchar('\n');
}