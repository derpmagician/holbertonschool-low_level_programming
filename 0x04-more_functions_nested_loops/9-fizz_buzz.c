#include <stdio.h>
#include "holberton.h"
/**
 * main - Fizz Buzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i <= 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			pritnf("Fizz");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			pritnf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			pritnf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			print(" ");
		}
	}
}
