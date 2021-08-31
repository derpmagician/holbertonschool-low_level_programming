#include "search_algos.h"

#include "search_algos.h"
/**
 * lin_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number element in array
 * @value: is value for search
 * Return: return the first index where value is located or -1 if is none
 * if array is NULL return -1
 */
int lin_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}


/**
 * jump_search - searches for a value in an array of ints
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 *         or -1 if value not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int linear_indx;
	size_t indx = 0, start, n_size;
	size_t jmp = (size_t) sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);

	while (indx < size && array[indx] < value)
	{
		printf("Value checked array[%lu] = [%u]\n", indx, array[indx]);
		start = indx;
		indx += jmp;
	}

	if (indx >= size)
		indx = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n",
		start, start + jmp);

	n_size = indx - start + 1;

	linear_indx = lin_search(&array[start], n_size, value);

	if (linear_indx  >= 0)
		return (start + linear_indx);

	return (linear_indx);
}
