#include "holberton.h"

/**
*print_line - draw a diagonal line n times
*@n: input
*Return: void
*/
void print_diagonal(int n)
{
	if ( n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for ( j = 0; j <= i; i++ );
				_putchar(' ')
			_putchar('\');
			_putchar('\n');
		}
	}
	else 
		_putchar('\n')
}
