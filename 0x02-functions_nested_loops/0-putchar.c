#include "main.h"
/**
 * main - to print _putchar
 *
 * Return: 0 as success
 */

int main(void)
	{
		char alx[] = "_putchar";

		int c;

		for (c = 0; c < 8; c++)
		{
			_putchar(alx[c]);
		}
		_puchar('\n');
		return (0);
	}
