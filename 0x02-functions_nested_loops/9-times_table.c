#include "main.h"

/**
 *times_table - print out the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int t, s, prod;

	for (t = 0; t <= 9; t++)
	{
		_putchar('0');
		for (s = 1; s <= 9; s++)
		{
			_putchar(',');
			_putchar(' ');

			prod = t * s;
			if (prod <= 9)
				_putchar(' ');

			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
