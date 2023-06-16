#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all single digit number of base ten
 *
 * Return: always 0 as success
 *
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
