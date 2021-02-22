#include "holberton.h"
/**
 * print_diagsums - Takes a pointer to an int
 * @a: destination string
 * @size: size
 *
 * Description: Appends two strings
 * Return: void
*/
void print_diagsums(int *a, int size)
{
int i, suma = 0;

for (i = 0; i < size; i++)
{
	suma = suma + *(a + ((size * i) + i));
}
printf("%d, ", suma);
suma = 0;
for (i = 0; i < size; i++)
{
	suma = suma + *(a + ((size * (i + 1)) - (i + 1)));
}
printf("%d\n", suma);
}
