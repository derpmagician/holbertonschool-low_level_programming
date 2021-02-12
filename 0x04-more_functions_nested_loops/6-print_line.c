#include "holberton.h"

/**
* print_line - prints - n times
* @n: input
* Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if(n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
