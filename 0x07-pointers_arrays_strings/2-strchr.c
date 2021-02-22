#include "holberton.h"
/**
 * _strchr - Takes a pointer to an int
 * @s: destination string
 * @c: source string
 *
 * Description: Appends two strings
 * Return: char
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s != c)
		return ('\0');
}
