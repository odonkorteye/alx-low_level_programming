#include <stdio.h>
/**
 * main - prints te frst 50 fibonnaci numbers
 * @void: no argument
 * Return: 0 as success
 */
int main(void)
{
	long num = 1, sec = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = num + sec;
		printf(", %lu", sum);
		num = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}
