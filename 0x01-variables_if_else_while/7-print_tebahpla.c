#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * void: Empty parameters mean it is not going receive any argurment.
 *
 * Description: Prints the alphabets in reverse order
 * can only use the putchar
 *
 * Return: 0 on success
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

