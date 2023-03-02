#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: location for appending
 * @src: string to be appended
 * @n: number bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, r = 0;

	while (src[i++])
		r++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = r; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
