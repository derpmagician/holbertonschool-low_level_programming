#include "holberton.h"

/**
 * print_last_digit - description
 * @n: number to chek
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
		n = n;
	else
		n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}

