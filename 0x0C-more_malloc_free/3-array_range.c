#include "main.h"
#include <stdlib.h>
/**
 *  *array_range - create array of integers
 *   *@min:int
 *    *@max:int
 *     * Return: int
*/

int *array_range(int min, int max)
{
int *p;
int i, x, n;
if (min > max)
return (NULL);
x = max - min;
p = malloc((x + 1) * sizeof(int));
if (p == 0)
return (NULL);
for (i = 0, n = min; n <= max; n++, i++)
p[i] = n;
return (p);
}
