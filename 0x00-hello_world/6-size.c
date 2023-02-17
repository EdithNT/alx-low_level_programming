#include <stdio.h>

/**
 * main - entry point
 * Return: (0) always
 */

int main(void)

{
	printf("size of a char: %ld\n", sizeof(charType));
	printf("size of an int: %ld\n", sizeof(intType));
	printf("size of a long int: %ld\n", sizeof(longType));
	printf("size of a double int: %ld\n", sizeof(doubleType));
	printf("size of a float: %ld\n", sizeof(floatType));

	return (0);
}
