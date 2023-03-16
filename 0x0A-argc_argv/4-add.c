#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point for running code
 * @argc: count of arguments in the function
 * @argv: array of pointers for function
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc > 1)
		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
				if (argv[a][b] < '0' || argv[a][b] > '9')
					return (printf("Error\n"), 1);
			sum += atoi(argv[a]);
		}

	printf("%i\n", sum);
	return (0);
}
