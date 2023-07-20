/**
  *int_index - a func that searches for an integer.
  *@array: array of integers.
  *@size: number of elements in the array.
  *@cmp: pointer to function used.
  *Return: -1 if there is no element match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{

		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}

	}
	return (res);
}
