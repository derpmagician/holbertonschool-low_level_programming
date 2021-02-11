#include "holberton.h"
/**
 * _isupper - check if a letter is uppercase
 * @c: input
 * Return: the value of the addition
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
