#include "main.h"


/**
 * print_last_digit - it prints the last digit
 * @n: number to compute the last digit for
 * Return: returns last digit
 **/

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}

