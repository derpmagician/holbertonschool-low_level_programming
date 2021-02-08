#include "holberton.h"
/**
 * _abs - description
 * @i: the converted number
 * Return: absolute value of input
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
