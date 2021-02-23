#include "holberton.h"
/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  * @a: the matrix
  * @size: the size
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int suma1 = 0;
	int suma2 = 0;
	int b = 0;
	int c = size - 1;

	while (b < size * size)
	{
		suma1 += a[b];
		suma2 += a[c];

		b += size + 1;
		c += size - 1;
	}
	printf("%d, %d\n", suma1, suma2);
}
