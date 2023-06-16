#include <stdio.h>
/**
 * main - Print an alphabet in lowercase in reverse order
 *
 * Return: always 0 as success
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
