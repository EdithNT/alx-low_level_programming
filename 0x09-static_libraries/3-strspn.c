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
	int a, i;
	int c = 0;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			i = 0;
			if (*s == accept[a])
			{
				c++;
				i = 1;
				break;
			}
		}
		if (!i)
			break;
		s++;
	}
		return (c);
}
