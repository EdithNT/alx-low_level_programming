#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a function to a newly allocated
 * space in memory
 * @str: string given as parameter
 *
 * Return: NULL if string is NULL, a pointer if successful
 * and NULL if memory is insufficient
 */

char *_strdup(char *str)
{
	char *strDuplicate;

	if (str == NULL)
		return (NULL);

	char strDuplicate = _strdup(str);

	if (!strDuplicate)
	{
		return (NULL);
	}

	return (strDuplicate);
}
