#include "main.h"

/**
 * _isalpha - we are checking for alphabets, all cases
 *
 * @c: value that will be checked
 *
 * Return: 1 if it is a letter, whether lower or uppercase; 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
