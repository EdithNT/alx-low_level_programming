#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - entry pont, print random positive and neagtive numbers
 *  Return: Always
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	If(n > 0);
	{
	printf("%d is positive \n", n);
	}
	else if
		(n < 0);
	{
	printf("%d is negative \n", n);
	}
	else
		return (0);
}
