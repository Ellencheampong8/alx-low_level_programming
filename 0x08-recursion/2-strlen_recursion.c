#include "main.h"
/**
 * _strlen_recursion - this fuction returns the length of string
 * @s:string
 * Return: int i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}

