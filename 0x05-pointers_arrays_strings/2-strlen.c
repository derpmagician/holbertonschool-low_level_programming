#include "holberton.h"

/**
 * _strlen - measures the lenght of *s
 * @s: string to be meassure
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
