#include "main.h"

/**
 * _memset - function fill the first int n bytes of the memory area pointed
 * to by char s with the constant byte char b
 *
 * @n: bytes of the memory area pointed to by @s
 *
 * @s: with the constant byte char b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area char s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

