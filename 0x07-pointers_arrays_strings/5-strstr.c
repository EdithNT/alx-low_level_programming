#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: a pointer to the located substring, null otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
