#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints _putchar.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char mystring[8] = "_putchar";

	while (n < 8)
	{
		putchar(mystring[n]);
		n += 1;
	}
	putchar('\n');
	return (0);
}
