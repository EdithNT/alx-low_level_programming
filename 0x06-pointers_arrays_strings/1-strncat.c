#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: string to be appended
 * @dest: location of appendment
 * @n: number of bytes
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	while (dest[i++])
		m++;
	for (i = 0; src[i] && i < n; i++)
		dest[m++] = src[i];
	return (dest);
}
