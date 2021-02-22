#include "holberton.h"
/**
 * _memcpy - Takes a pointer to an int
 * @dest: destination string
 * @src: source string
 * @n: size in bytes
 *
 * Description: Appends two strings
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j = 0;
for (j = 0 ; j < n; j++)
{
	dest[j] = src[j];
}
return (dest);
}
