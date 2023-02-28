#include "main.h"

/**
 * _strcpy - copies a string pointed to by src, including terminating null nyte
 * @dest: destination of file pointer
 * @src: string pointer
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
