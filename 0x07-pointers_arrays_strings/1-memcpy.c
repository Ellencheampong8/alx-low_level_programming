#include "main.h"

/**
 * _memcpy - function copies int n bytes from memory area char *src
 * to memory area char *dest
 *
 * @n: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to char *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

