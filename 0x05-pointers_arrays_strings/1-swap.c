#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 * Resturn: void
 */
void  swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
