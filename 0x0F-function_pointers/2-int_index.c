#include "function_pointers.h"

/**
 * int_index - Apllies cmp function to each array node and returns the index
 * @array: Array of integers
 * @size: Ssixe of array
 * @cmp: Pointer to a function
 *
 * Return: Index of the element if cmp(array[ind]) == 0, -1 otherwise
 */
iint int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
