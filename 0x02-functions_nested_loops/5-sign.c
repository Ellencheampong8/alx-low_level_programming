#include "main.h"


/**
 * print_sign - determines sign of int
 *
 * @n: the number to check for sign
 *
 * Return: 1 if positive, zero if 0, and -1 if negative
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

