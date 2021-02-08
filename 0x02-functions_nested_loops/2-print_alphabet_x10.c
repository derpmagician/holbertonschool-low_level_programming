#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet with _putchar x10
 *
 * Return: void
 */


void print_alphabet(void)
{
	int i;
	char c;
	for (i=0;i<9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
