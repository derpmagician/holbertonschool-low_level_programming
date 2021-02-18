#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array  - Reverse strings
 * @a: first string
 * @n: Elements of the array
 *
 * Description: Reverse strings
 * Reverse Strings
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, j;
	int b[1000];
	for (j = 0; j <= n; j++)
	b[j] = a[j];
	j = 0;
	for (i = (n - 1); i >= 0 ; i--)
	{
		a[i] = b[j];
		j++;
	}
}
