#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements of array
 * @size: size of memory of bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int l = 0, i = 0;
	char *p

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
