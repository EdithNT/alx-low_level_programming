#include "main.h"

/**
 * rev_string - reverses a string
 * @s: value of integer
 * Return void
 */

void rev_string(char *s)
{
	int l, m;
	char t;

	while (*s[l] != '\0')
	{
		l++;
	}
	for (; l > 0; i--)
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
