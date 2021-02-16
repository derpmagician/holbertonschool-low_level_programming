#include "holberton.h"
/**
  * rev_string - Reverse string
  * @s: The string to reverse
  *
  * Return: void
  */
void rev_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	while (c > 0)
	{
		_putchar(s[c - 1]);
		c--;
	}
	_putchar('\n');
}
