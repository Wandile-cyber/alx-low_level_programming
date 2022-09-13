#include "main.h"

#include "stdio.h"

/**
 * main - program that finds and prints the sum of the even-valued terms, followed by a new line
 *
 * Return: int.
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	int sum = 0;
	long fib;

	while (n < 4000000)
	{
		fib = j + i;
		if (fib % 2 == 0 )
			sum += fib;

		i = j;
		j = fib;
		n += 1;
	}
	printf("%ld\n", sum);
	return (0);
}
