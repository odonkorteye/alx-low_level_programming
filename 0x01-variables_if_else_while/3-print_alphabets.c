#include <stdio.h>
/**
 * main - Print an alphabet in lowercase and uppercase
 *
 * Return: always 0 as success
 *
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
