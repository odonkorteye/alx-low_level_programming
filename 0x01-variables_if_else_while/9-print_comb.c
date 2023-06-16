#include <stdio.h>
#include <ctype.h>
/**
 * main - Print all possible single digits
 *
 * Return: always 0 as success
 *
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
