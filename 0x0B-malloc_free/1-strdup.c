#include "main.h"
#include <stdlib.h>
/**
 * * _strdup - returns a pointer to a newly allocated
 * *space in memory, which contains a copy of the
 * *string given as a parameter.
 * *@str:String to be copied
 * *
 * *Return: NULL in case of error, pointer to allocated
 * *space
*/
char *_strdup(char *str)
{
int l, i;
char *p;
if (str == NULL)
return (NULL);
for (l = 0; str[l]; l++)
i++;
p = malloc((i + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (l = 0; str[l]; l++)
{
p[l] = str[l];
}
p[i] = '\0';
return (p);
}
