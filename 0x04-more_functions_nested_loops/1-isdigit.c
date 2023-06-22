#include "main.h"
/**
 * _isdigit - Checks if it is a digit
 *
 * @c: character to check
 *
 * Return: returns 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
