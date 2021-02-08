#include <stdio.h>

/**
 *  main - Description
 * Peinrs Holberton and a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char c;
	char l[] = "Holberton\n";

	while (i <= 9)
	{
		c = l[i];
		_putchar(c);
		i++;
	}
	return (0);
}
