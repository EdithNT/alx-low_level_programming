#include "main.h"

/**
 *_strcat - concatenates two strings
 *@src: first string to append
 *@dest: location to append the first string
 *
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
