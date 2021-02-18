#include "holberton.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination
  * @src: The source
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, l = 0;

	while (dest[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	for (k = i; k <= i + j ; k++)
	{
		dest[k] = src[l];
		l++;
	}
return (dest);
}
