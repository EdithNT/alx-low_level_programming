#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int i;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
