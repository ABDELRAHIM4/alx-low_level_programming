#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - function that searches for a value in an array
 *@array: pointer to the first element of the array to search in
 *@size: the number of element
 *@value: the value to search for
 *Return: the index of number
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	high = size - 1;
	low = 0;
	mid = (low +  high) / 2;
	while (low <= high)
	{
		mid = (low +  high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == low)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
