#include "main.h"
/**
 * string_toupper - function to change lowercase to upper
 * @s: character to change
 * Return: return value of the change
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
