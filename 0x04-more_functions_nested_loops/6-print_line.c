#include "main.h"

/**
 * print_line - will draw a straight line in the terminal
 * @n: number of times the character will be printed
 * Return: 0
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
	return (0);
}
