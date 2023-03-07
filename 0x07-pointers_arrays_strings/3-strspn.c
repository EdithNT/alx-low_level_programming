#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: prefix
 * @accept: string
 *
 * Return: the number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = _strspn(s, accept);

	if (a == 0)
	{
		return (0);
	}
	return (a);
}
