#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: an array
 * @size: number of elements in the arrat
 * @cmp: a pointer to the function used to compare values
 *
 * Return: -1 if size <= 0 and no element matches,
 * or the index for the first element of the cmp.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
