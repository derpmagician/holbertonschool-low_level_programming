#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: p or error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	ptr = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
