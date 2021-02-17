#include "holberton.h"
/**
  * rev_string - Reverse string
  * @s: The string to reverse
  *
  * Return: void
  */
void rev_string(char *s)
{
	int a, l = 0;
	char c;

	while (s[l] != '\0')
		l++;
	
	while (l > a)
	{
		l--;
		c =s[a];
		s[a] = c;
		a++;
	}
}
