#include <stdio.h>

/**
 * main - combinations of single-digit numbers
 * Return: 0
 */

int main(void)

{
	int num1;

	for (n = 0; n < 10; n++)
	{
	putchar(n + '0');
	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
