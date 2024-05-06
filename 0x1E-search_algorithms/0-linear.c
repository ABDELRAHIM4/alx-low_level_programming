#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 *@array: pointer to the first element of the array to search in
 *@size: the number of element
 *@value: the value to search for
 *Return: the index of number
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0, y = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			y = i;
			return (y);
			break;
		}
	}
	return (-1);
}
