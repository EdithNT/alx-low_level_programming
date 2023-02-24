#include "main.h"

/**
 * _isupper - we are checking for uppercase letters
 * @c: integer value
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
