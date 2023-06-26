#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: takes an integer
 * @b: takes an integer
 */
void swap_int(int *a, int *b)
{
	int temp_value;

	temp_value = *a;
	*a = *b;
	*b = temp_value;
}
