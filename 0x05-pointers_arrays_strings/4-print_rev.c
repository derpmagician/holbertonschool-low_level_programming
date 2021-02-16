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
		c++;
	while (c > 0)
	{
		_putchar(s[d] - 1);
		c--;
	}
	_putchar('\n');
}
