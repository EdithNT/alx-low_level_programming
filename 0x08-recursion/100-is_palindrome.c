#include "main.h"

/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if it is a palindrome, or 0 otherwise
 */

int is_palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
		return (1);
	else
		return (0);
}
