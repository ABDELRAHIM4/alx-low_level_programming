#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0, y = 0;
	if (array == NULL)
	{
		return -1;
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			y = i;
			return y;
			break;
		}
	}
	return -1;
}
