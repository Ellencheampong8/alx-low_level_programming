#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 10 numbers
 * void: Empty parameters mean it is not going receive any argurment.
 *
 * Description: Prints the numbers 0-9
 *
 * Return: 0 on success
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

