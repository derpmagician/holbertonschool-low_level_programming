#include "holberton.h"
/**
 * _strstr - Takes a pointer to an int
 * @haystack: destination string
 * @needle: source string
 *
 * Description: Appends two strings
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
	char *Begin = haystack;
	char *pattern = needle;

	while (*haystack && *pattern && *haystack == *pattern)
	{
		haystack++;
		pattern++;
	}
	if (!*pattern)
		return (Begin);
	haystack = Begin + 1;
}
return (NULL);
}
