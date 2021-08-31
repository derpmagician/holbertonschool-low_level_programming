#include "search_algos.h"

/**
 * search_here - print the sub array to search
 * @array: array to print
 * @start: starting printing position
 * @end: end of the printing position
 */
void search_here(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[i]);
}

/**
 * bin_search - binary search for element in array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of element equal to value, or -1 if NULL or empty.
 */
int bin_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	size_t center = (size - 1) / 2;

	if (array == NULL || size == 0)
		return (-1);

	while (start <= end)
	{
		search_here(array, start, end);
		center = (start + end) / 2;
		if (value > array[center])
			start = center + 1;
		else if (value < array[center])
			end = center - 1;
		else
			return (center);
	}
	return (-1);
}

/**
 * exponential_search - Searches a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	int indx = 1, start, binary_indx;
	size_t n_size;

	if (array == NULL || size == 0)
		return (-1);
	else if (array[0] == value)
		return (0);

	while (indx < size && array[indx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", indx, array[indx]);
		start = indx;
		indx *= 2;
	}

	if (indx >= size)
		indx = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", start, indx);

	n_size = indx - start + 1;

	binary_indx = bin_search(&array[start], n_size, value);

	return (start + binary_indx);
}
