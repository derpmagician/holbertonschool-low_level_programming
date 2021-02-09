#include "holberton.h"
/**
 * _islower - description
 * detects lowercases
 * @c: character to test.
 * Return: 1 if for lowercase, 0 if is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
