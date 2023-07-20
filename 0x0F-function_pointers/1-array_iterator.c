#include <stdio.h>
/**
  *array_iterator - a function that executes function.
  *@array: array of elements.
  *@size: size of array.
  *@action: function pointer.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
