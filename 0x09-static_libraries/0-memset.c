#include "main.h"
/**
 * _memset - fills memory area with the constant byte
 * @s: array for setting
 * @b: value to set the array as
 * @n: amount of times
 * Return: char value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
