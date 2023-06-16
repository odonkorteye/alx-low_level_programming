#include <stdio.h>
/**
 * main - Print an alphabet in lowercase ff by a line
 *
 * Return: always 0 as success
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
