#include "holberton.h"
#include <stdlib.h>

/**
  * string_nconcat - functions that concatenates 2 strings
  * @s1: First input
  * @s2: Secon input
  * @n: number of character
  *
  * Return: Pointer to a new address
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1 = 0, ls2 = 0, x = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[ls1])
		ls1++;

	while (s2[ls2])
		ls2++;

	if (n >= ls2)
		l = ls1 + ls2;
	else
		l = ls1 + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	ls2 = 0;
	while (x < l)
	{
		if (x <= ls1)
			str[x] = s1[x];

		if (x >= ls1)
		{
			str[x] = s2[ls2];
			ls2++;
		}
		x++;
	}
	str[x] = '\0';
	return (str);
}
