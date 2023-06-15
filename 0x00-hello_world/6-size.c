#include <stdio.h>
/**
 * main - Prints the size of various types
 *
 * Return: always 0 as success
 */
int main(void)
	{
		printf("Size of a char: %lu byte(s)\n", sizeof(char));
		printf("Size of an int: %lu byte(s)\n", sizeof(int));
		printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
		printf("Size of a float: %lu byte(s)", sizeof(float));
		return (0);
	}
