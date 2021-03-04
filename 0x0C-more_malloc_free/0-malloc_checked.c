#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: ptr or error
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
