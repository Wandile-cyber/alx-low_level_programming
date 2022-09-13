#include "main.h"

/**
 * main - function that prints alphabets.
 *
 * Return: int
 */

void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
}
