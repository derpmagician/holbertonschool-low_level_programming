#include <stdlib.h>
#include <stdio.h>

/**
 * main - Descritopm
 * Prints numbers in base 16
 * Return: 0
i */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
