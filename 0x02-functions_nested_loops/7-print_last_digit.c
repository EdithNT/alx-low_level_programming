#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @y: value of integer whose last digit we are finding
 *
 * Return: 0
 */

int print_last_digit(int y)
{
	y = y % 10;

	if (y < 0)
		y = -y;
	_putchar(y + '0');

	return (y);
}
