#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line
 * @separator: the string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list charArrays;
	unsigned int b;
	char *string;

	va_start(charArrays, n);

	for (b = 0; b < n; b++)
	{
		string = va_arg(charArrays, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && (n - 1) > b)
			printf("%s", separator);
	}
	printf("\n");
	va_end(charArrays);
}
