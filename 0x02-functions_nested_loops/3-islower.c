#include "main.h"
/**
 * _islower - prints 1 if c is lowercase, 0 otherwise
 * @c: takes the character
 * Return:0 for uppercase, 1 for lowercase
 */
int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
