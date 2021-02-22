#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - Takes a pointer to an int
 * @s: destination string
 * @accept: source string
 *
 * Description: Appends two strings
 * Return: char
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, count = 0;
for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
			count += 1;
	}
	if (i == count)
		break;
}
return (count);
}
