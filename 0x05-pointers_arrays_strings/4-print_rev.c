#include "holberton.h"
/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int c = 0;
	int d;

	while (s[c] != '\0')
	{
		c++;
	}
	for (d = c - 1; d => 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
