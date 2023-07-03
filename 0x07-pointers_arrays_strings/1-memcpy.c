#include "main.h"
/**
 * _memcpy - copies from source mem area to dest mem area
 * @dest: destination memory area
 * @src: source memory area
 * @n: amount of times
 * Return: returns the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
