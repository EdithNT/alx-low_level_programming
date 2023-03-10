#include "main.h"

/**
 * print_sign - -will show whether a number is positive or negative
 *
 * @n: value of int
 *
 * Return: 1, -1, 0 if n is greater than 0, less than 0, and is 0 respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
