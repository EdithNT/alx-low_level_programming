#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first integer
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mynumbers;
	unsigned int i;
	unsigned int sum;

	va_start(mynumbers, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(mynumbers, const unsigned int);
	}
	va_end(mynumbers);

	return (sum);
}
