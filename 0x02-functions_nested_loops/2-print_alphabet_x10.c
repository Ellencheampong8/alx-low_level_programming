#include "main.h"


/**
 * print_alphabet - it prints the lower case alphabet
 *
 **/

void print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - it now prints print_alphabet 10 times
 *
 **/
void print_alphabet_x10(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}

