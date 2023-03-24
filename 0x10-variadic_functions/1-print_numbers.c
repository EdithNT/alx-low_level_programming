#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int b;

	va_start(nums, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(nums, const unsigned int));
		if (separator != NULL && (n - 1) > b)
			printf("%s", separator);
	}
	va_end(nums);
}
