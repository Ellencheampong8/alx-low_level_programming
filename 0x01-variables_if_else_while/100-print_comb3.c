#include <stdio.h>

/**
 * main - Writes 00 - 99
 * void: Empty parameters mean it is not going receive any argurment.
 *
 * Description: Writes all unique combinations
 * of the 2 numbers
 *
 * Return: 0 on its success
*/
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if ((i < j) & (j <= '9'))
			{
				putchar(i);
				putchar(j);
				if ((j < '9') | (i < '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

