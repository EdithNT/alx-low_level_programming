#include <stdio.h>

/**
 * main - entry point
 * @argc: counts number of arguments
 * @argv: array of pointers to argument strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
