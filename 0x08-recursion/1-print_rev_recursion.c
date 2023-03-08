#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed out
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(&s[i - 1]);
	}
	else
		_putchar('\n');
}
