#include "main.h"
/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to be changed
 * @to: string to change the pointer
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

