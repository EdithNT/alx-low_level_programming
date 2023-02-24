#include "main.h"

/**
 * print_line - will draw a straight line in the terminal
 * @n: number of times the character will be printed
 * Return: 0
 */

void print_line(int n)
{
	for (n = 1 ; n > 0; n++)
	{
		_putchar('_');
	}
	return (0);
}
