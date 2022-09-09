#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * The string Last digit of n
 * Return: 0
 */

int main(void)
{
int number;
int lastint;

srand(time(0));
number = rand() - RAND_MAX / 2;
lastint = number % 10;
if (lastint > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", number, lastint);
}
else if (lastint == 0)
{
printf("Last digit of %d is %d and is 0\n", number, lastint);
}
else if (lastint < 6 && lastint != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", number, lastint);
}
return (0);
}
