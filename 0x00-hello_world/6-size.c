#include <stdio.h>

/**
 * main - entry point
 * Return: (0) always
 */

int main(void)

{
	printf("size of a char: %ld byte(s)\n", sizeof(charType));
	printf("size of an int: %ld byte(s)\n", sizeof(intType));
	printf("size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("size of a double int: %ld byte(s)\n", sizeof(doubleType));
	printf("size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
