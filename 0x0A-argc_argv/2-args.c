#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count arguments
 * @argv: array of argument pointers
 *
 * Return: 0
 */

int main(int argc, char **argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
