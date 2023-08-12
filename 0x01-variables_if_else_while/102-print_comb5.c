#include <stdio.h>

/**
 * main - Writes combinations of 00-99
 * void: Empty parameters mean it is not going receive any argurment.
 *
 * Description: Writes all the unique combinations of 2
 * digit numbers
 *
 * Return: 0 on its success
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98 || j != 99)
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

