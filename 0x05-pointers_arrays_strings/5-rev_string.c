#include "main.h"

/**
 * rev_string - reverses a string
 * @s: value of integer
 * Return void
 */

void rev_string(char *s)
{
	int l, m;
	char t[1000];

	while (*s[l] != '\0')
	{
		l++;
	}

	for (; l > 0; l--)
	{
		t[m] = s[l + 1];
		m++;
	}

	while (l > m)
	{
		s[l] = t[l];
		l++;
	}
}
