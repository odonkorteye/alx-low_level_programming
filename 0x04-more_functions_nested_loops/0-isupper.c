#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 * @c: characte for the check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
