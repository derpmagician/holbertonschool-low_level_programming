#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 *
 * Return: number
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int n = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + sign * (s[i] - '0');
		i++;
	}
	return (n);
}
