#include <stdio.h>

/**
 * main - this prints the number of argument
 * @argc: for arguments counting
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
