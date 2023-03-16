#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter
 *
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	b = malloc(b);
	if (b == NULL)
		exit(98);
	return (a);
}
