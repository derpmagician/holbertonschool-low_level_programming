#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t start = 0, end = size - 1, indx = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		indx = start + (((double) (end - start) /
				(array[end] - array[start])) *
				(value - array[start]));

		if (indx > end)
		{
			printf("Value checked array[%li] is out of range\n", indx);
			return (-1);
		}

		printf("Value checked array[%lu] = [%i]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);

		if (array[indx] < value)
			start = indx + 1;
		else
			end = indx - 1;
	}
	return (-1);
}
