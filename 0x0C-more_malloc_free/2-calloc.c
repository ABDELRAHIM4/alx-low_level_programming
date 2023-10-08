#include "main.h"
#include <stdlib.h>
/**
 *  *_calloc - allocate memory with calloc
 *   *@nmemb:unsigned int
 *    *@size:unsigned int
 *     *Return: void *
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * sizeof(nmemb));
if (p == 0)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
