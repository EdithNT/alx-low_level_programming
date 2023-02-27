#include <stdio.h>

/**
 * reset_to_98 - take a pointer to an int as a parameter
 * @*n: pointer to an integer
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int n = 98;
	*n = %n;
	*n = 98;

	return (0);
}
