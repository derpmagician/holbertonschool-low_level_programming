#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: Pointer  to the previusly alllocated memory
  * @old_size: Old size in bytes of ptr
  * @new_size: New Size of ptr
  *
  * Return: ntpr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
