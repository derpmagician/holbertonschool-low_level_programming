#include <stdio.h>

/**
 * main - Description
 * Uses putchar to output a-z and then a new line
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
