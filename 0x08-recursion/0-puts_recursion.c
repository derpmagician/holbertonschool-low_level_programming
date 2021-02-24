#include "holberton.h"
/**
 *  _puts_recursion - Pritns a string using _puts
 * @s: input to print
*/
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	_puts_recursion(s);
	return;
	}

	_putchar('\n');
}
