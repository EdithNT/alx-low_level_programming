#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ax10 = 'a';

	while (ax10++ <= 9)
	{
		for (ax10 = 'a'; ax10 <= 'z'; ax10++)
			_putchar(ax10);
		_putchar('\n');
	}
}
