#include "holberton.h"

/**
*print_line - draw a diagonal line n times
*@n: input
*Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j <= i)
				{
					if (j == i)
						_putchar('\\');
					else
						_putchar(' ');
				}
				else
				{
					if (j == n)
						_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
