#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point for running
 * @argc: count of arguments in the function
 * @argv: array of pointers to argument strings
 *
 * Return: Error if the program doesn't receive two arguments,
 * otherwise, 0
 */

int main(int argc, char *argv[])
{
	int i, j, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;

	printf("%i\n", prod);

	return (0);
}
