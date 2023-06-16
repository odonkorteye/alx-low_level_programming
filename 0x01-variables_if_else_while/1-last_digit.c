#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print last digit of a random number
 *
 * Return: always 0 as success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lDigit = n % 10;

	if (lDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	}
	else if (lDigit <= 5 && lDigit > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lDigit);
	}
	return (0);
}
