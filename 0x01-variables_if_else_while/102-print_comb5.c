#include <stdio.h>
/**
 * main - print possible different combination of 2 two numbers
 *
 * Return: 0
 */
int main(void)
{
	int a, b;
	int c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = c + 1; d <= '9'; d++)
				{
					if (a != '6' || b != '7' || c != '8' || d != '9')
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
