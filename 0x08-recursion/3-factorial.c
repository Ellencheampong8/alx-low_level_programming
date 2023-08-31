#include "main.h"
/**
 * factorial - this function returns factorial of int x
 * @n:int
 * Return:int (x)
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);

}

