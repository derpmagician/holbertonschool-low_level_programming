#include "holberton.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination
  * @src: The source
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, l = 0, k;

while (dest[i] != 0)
	i++;
while (dest[j] != 0)
	j++;
if (n >= j)
	n = j;
	for (k = i; k < i + n ; k++, l++)
	{
		dest[k] = src[l];
	}
return (dest);
}
