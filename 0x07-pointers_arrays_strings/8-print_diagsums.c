#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrices
 * of integers
 * @a: first square matrix
 * @size: second square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2 = 0;

	for (i = 0; i < 0; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
