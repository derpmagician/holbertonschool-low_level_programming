#include "holberton.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: The array filled
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		array[counter] = c;

	return (array);
}
