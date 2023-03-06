#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @s: pointer to the memory area
 * @n: number of bytes of the memory area
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
