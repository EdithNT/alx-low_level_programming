#include "main.h"

/**
 * _memcpy - copies bytes from one memory area to another memory area
 * @dest: location of copying
 * @src: area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
