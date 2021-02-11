#include "holberton.h"

/**
 * _isupper - Entry point
 *@c: charater to check
 * Return: 1 for uppercase, 0 for lowercase
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
