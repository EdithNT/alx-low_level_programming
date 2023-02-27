#include "main.h"

/**
 *_strlen - returns thte length of a string
 *@s: value of string
 *
 * Return: count
 */

int _strlen(char *s)
{
	int count 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
