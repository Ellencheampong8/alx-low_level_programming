#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function to add
  * @a: first operand
  * @b: second operand
  *
  * Return: return sum of the two operands
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction function
  * @a: first operand
  * @b: second operand
  *
  * Return: return results two operands
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication function
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division function
  * @a: ...
  * @b: ...
  *
  * Return: ...
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
  * op_mod - remainder function
  * @a: ...
  * @b: ...
  *
  * Return: ...
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
