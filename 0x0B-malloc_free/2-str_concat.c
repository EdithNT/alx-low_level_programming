#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenetes two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in
 * memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
