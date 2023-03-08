#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a newline
 * @s: the string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar("%s");
	_putchar('\n');
}
