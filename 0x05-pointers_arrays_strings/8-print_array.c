#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of elements of integers
 * @a: pointer to n
 * @n: number of elements in the array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int r = 0;

	for (r = 0; r >= 0; r++)
	{
		printf("%d\n", (r[a]));
		if (r != n - 1 )
			printf(", ");
	}
}
