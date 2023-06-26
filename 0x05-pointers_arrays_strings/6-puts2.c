#include "main.h"
/**
 * puts2 - prints every other char of a string, starts with first char
 *
 * @str: takes the string character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
