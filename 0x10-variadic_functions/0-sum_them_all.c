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
	for (i = n; i < 0; i = va_arg(mynumbers, const unsigned int))
	{
		sum = sum + va_arg(mynumbers, const unsigned int);
	}
	va_end(mynumbers);

	return (0);
}
