#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *
 *Return: 1 if strings are the same, 0 if stings are different
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
