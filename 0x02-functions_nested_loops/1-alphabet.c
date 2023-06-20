#include "main.h"
/**
 * print_alphabet - to print alphabet as lowercase
 * alpha is the character
 */

void print_alphabet(void)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		_putchar('\n');
		}
	}
