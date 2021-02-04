#include <stdio.h>

/**
 * main - Description
 * Prints the alphabet lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
