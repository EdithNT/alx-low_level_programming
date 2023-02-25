#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a = 0, m;

	while (a < n && a > 0)
	{
		m = 0;
		while (m < a)
		{
			_putchar(' ');
			m++;
		}

		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
