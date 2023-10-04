#include "main.h"
#include <stdlib.h>
/**
 * * str_concat - a function that concatenates two strings.
 * *@s1:First string
 * *@s2:Second string
 * *
 * *Return: NULL in case of failure , but pointer to new string in
 * *case of success
*/
char *str_concat(char *s1, char *s2)
{
char *p;
int i, l = 0;
int x = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
else

for (i = 0; s1[i] || s2[i]; i++)

l++;

p = malloc(l *sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; s1[i]; i++)

p[x++] = s1[i];

for (i = 0; s2[i]; i++)

p[x++] = s2[i];


return (p);

}
