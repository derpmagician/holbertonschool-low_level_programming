#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - addition function
  * @a: element 1
  * @b: element 2
  *
  * Return: addition
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substraction function
  * @a: element 1
  * @b: element 2
  *
  * Return: substraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication function
  * @a: element 1
  * @b: element 2
  *
  * Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divition function
  * @a: element 1
  * @b: element 2
  *
  * Return: divition
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - module function
  * @a: element 1
  * @b: element 2
  *
  * Return: module
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
