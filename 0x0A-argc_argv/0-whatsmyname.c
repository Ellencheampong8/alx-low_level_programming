#include <stdio.h>

/**
 * main - prints its name and followed by a line
 * @argc: arguments count
 * @argv: the arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
