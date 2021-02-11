nclude "holberton.h"
/**
*_isdigit - Return 1 if c is a digit.
*@c: Value
*Return: 1 if c is a value ,0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
		return (1);
	else
		return (0);
}
