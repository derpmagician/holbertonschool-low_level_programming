#include "holberton.h"
/**
 * string_toupper  - String to Upper
 * @s: string to convert
 *
 * Description: String to upper
 * Upper
 * Return: char
*/
char *string_toupper(char *s)
{
int i = 0, j;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
return (s);
}
