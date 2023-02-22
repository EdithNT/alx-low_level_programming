#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int ax10 = 0;

	while (ax10++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
