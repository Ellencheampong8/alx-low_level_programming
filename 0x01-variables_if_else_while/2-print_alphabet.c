#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * void: Empty parameters mean it is not going receive any argurment.
 *
 * Description: Prints the alphabet in lower case
 * can only use the putchar
 *
 * Return: 0 on success
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

