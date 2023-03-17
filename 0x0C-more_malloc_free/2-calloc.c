#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: bytes of each element
 *
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	unsigned int a;

	n = malloc(nmemb(size));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (n == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (nmemb * size); a++)
		n[a] = 0;

	return (n);
