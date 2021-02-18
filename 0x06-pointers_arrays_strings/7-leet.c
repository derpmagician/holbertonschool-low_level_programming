#include "holberton.h"
/**
 * leet  - Capitalizes String
 * @s: string to convert
 *
 * Description: String to upper
 * Upper
 * Return: char
*/
char *leet(char *s)
{
int i = 0, e = 0;
char letters[10] = {'a', 'e',  'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char replace[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
while (s[i] != '\0')
{
	e = 0;
	while (e < 10)
	{
		if (letters[e] == s[i])
		{
			s[i] = replace[e];
		}
	e++;
	}
i++;
}
return (s);
}
