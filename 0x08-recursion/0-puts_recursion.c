#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a newline
 * @s: the string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int c;

	c = 0;

	if (s[c] == '\0')
		return;

	else
	_putchar(s[c]);
	_putchar('\n');
	_puts_recursion(&s[c + 1]);
}
