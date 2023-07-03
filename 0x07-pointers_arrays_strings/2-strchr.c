#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string that contains the char
 * @c: char to locate
 * Return: first occurrence of char pointer in the string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
