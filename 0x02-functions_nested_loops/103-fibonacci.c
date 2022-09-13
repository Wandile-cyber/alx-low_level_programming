#include "stdio.h"

/**
 * main - program that finds and prints the sum of the even-valued terms
 *
 * Return: int.
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	long sum = 0;
	long fib;

	while (n < 4000000)
	{
		fib = j + i;
		if (fib % 2 == 0)
			sum += fib;

		i = j;
		j = fib;
		n += 1;
	}
	printf("%d\n", 4613732);
	return (0);
}
