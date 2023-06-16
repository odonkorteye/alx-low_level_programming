#include <stdio.h>
/**
 * main - Print an alphabet in lowercase except q,e
 *
 * Return: always 0 as success
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' || alpha !=  'e')
			putchar(alpha)
	}
	putchar('\n');
	return (0);
}
