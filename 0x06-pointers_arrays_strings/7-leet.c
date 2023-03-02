#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string to be printed
 *
 * Return: new modified string
 */

char *leet(char *s)
{
	int i, j;
	char *a = aeotlAEOTL;
	char *b = 4307143071;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
}
