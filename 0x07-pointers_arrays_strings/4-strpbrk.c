#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: second string
 *
 * Return: a pointer to the byte, or null otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}	
