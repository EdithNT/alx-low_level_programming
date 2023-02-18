#include <stdio.h>

/**
 * main - combinations of single-digit numbers
 * Return: 0
 */

int main(void)

{
	int num1;

	for (num1 = 0; num1 < 10; num1++)
	{
	putchar(num1 + '0');
	if (num1 < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
