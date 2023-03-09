#include "main.h"

/**
 * squareroot - returns a squareroot
 * @i: testing number
 * @j: main number
 *
 * Return: -1 if the square is greater than
 * the main number, the tester if there is a square root,
 * and 0 if nothing happens
 */

int squareroot(int i, int j)
{
	if (i * i > j)
		return (-1);
	else if (i * i == j)
		return (i);
	else
		return (squareroot(j, i + 1));
	return (0);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root we are finding
 *
 * Return: -1 if there is no natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squareroot(n, 1));
}
