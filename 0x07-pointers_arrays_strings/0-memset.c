#include "main.h"
#include <string.h>
#include <stdio.h>

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
	char s;
	unsigned int size[n];

	_memset(s, 'b', n*sizeof(size[0]));
	_putchar('\n');

	return (s);
}
