#include "main.h"
/**
 * string_toupper - changes the lowercase to uppercase
 * @s:string
 * Return:char s
 */
char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}

