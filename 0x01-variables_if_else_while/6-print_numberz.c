#include <stdlib.h>
#include <stdio.h>

/**
 * main - dESCRIPTION
 * Prints single digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
