#include "holberton.h"
/**
 * _memset  - Takes a pointer to an int
 * @s: string
 * @b: byte to insert
 * @n: size in bytes
 * Description: Appends two strings
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n; i++)
{
	s[i] = b;
}
return (s);
}
