#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
	putchar(alphabet);
	putchar('\n');
	}

	return (0);
}
