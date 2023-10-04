#include "main.h"
#include <stdlib.h>
/**
 * * alloc_grid - returns a pointer to a
 * *2 dimensional array of integers.
 * *@width: width oàf array
 * *@h: height of array
 * *
 * *Return: pointer to the array
*/

int **alloc_grid(int width, int h)
{
	int **t, i, j;

	t = malloc(sizeof(*t) * h);
	if (width <= 0 || h <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < h; i++)
	{
	t[i] = malloc(sizeof(**t) * width);
	if (t[i] == 0)
	{
		/*Free everything if malloc fails*/
		while (i--)
			free(t[i]);
		free(t);
		return (NULL);
	}
	for (j = 0; j < width; j++)
		t[i][j] = 0;
	}
	}
	return (t);
}
