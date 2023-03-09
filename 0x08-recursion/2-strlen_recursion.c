#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: points to a string
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		_strlen_recursion(s++);
		return (0);
	}
}
