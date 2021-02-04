#include <stdio.h>

/**
 * main - Description
 *
 * Description:putchar all numbers from 0-9
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%i", n);
	putchar('\n');
	return (0);
}
