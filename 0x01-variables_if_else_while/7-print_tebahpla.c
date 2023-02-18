#include <stdio.h>

/**
 * main - alphabets in reverse lowercase
 * Return: 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
