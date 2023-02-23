#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 *
 * @n: value of integer 
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
		while ( n > 97)
			printf("%d, ", n--);
	else
		while (n < 98)
			printf("%d, ", n++);
	printf("98\n");
}
