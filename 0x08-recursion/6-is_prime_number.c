#include "main.h"

/**
 * primenumber - finds prime numbers
 * @p:
 * @q:
 * 
 * Return:
 */

int primenumber(int p, int q)
{
	if (p <= 1 || p % q == 0)
		return (0);
	else if (p == q)
		return (1)
	else if (p > q)
		primenumber(p, q + 1);
	return (1);
}

/**
 * is_prime_number - for prime numbers
 * @n: input integer
 *
 * Return: 1 if input number is an integer,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	return (primenumber(n, 2));
}
