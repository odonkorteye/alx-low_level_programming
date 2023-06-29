#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination
 * @src: source array
 * @n: number of times to append
 *
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
