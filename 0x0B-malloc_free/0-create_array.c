#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initializes it
 * to a specific task
 * @size: size of the array
 * @c: index of character
 *
 * Return: NULL if size is 0
 * a pointer to an array, or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptrarray;
	unsigned int a; /* this is the counter for the loop */

	ptrarray = malloc(size * sizeof(char));

	if (size == 0)
	return (NULL);

	for (a = 0; a < size; a++)
	{
		ptrarray[a] = c;
	}
	return (ptrarray);
}
