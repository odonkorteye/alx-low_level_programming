#include "main.h"
/**
 * print_last_digit - this function prints the last difit
 * @n: takes ld as an integer
 * Return: returns the output
 */
int print_last_digit(int n)
	{
		int ld = n % 10;

		if (n < 0)
			ld = ld * -1;
		_putchar(ld + '0');
		return (ld);
	}
