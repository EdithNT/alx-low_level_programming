#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int s = 0;
	int m;

	while (s < n && s > 0)
	{
		m = 0
		while (m < s)
		{
			_putchar(' ');
			m++;
		}
		
		_putchar('\\');
		_putchar('\n');
		s++;
	}
	if (s == 0)
		_putchar('\n');
}
