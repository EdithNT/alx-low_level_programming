#include <stdio.h>

/**
 * main - starting point for code run
 * @argc: count of arguments
 * @argv: pointer to strings of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, cents;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (sum = 0; cents > 0; sum++)
	{
		if (cents - 25 >= 0)
			cents = cents - 25;
		else if (cents - 10 >= 0)
			cents = cents - 10;
		else if (cents - 5 >= 0)
			cents = cents - 5;
		else if (cents - 2 >= 0)
			cents = cents - 2;
		else if (cents - 1 >= 0)
			cents = cents - 1;
	}

	printf("%d\n", sum)
		return (0);
}
