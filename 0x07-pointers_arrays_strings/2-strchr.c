#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: first character
 * @c: second character
 *
 * Return: a pointer to s if found, or null if otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
