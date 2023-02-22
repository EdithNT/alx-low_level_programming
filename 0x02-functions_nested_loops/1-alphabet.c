#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	char alphabet = 'a';

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	return (0);
}
