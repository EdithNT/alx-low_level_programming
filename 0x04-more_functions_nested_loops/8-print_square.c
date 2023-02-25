#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int m, s;

	for (s = 0; s < size; s++)
	{
		for (m = 0, m < size; m++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
