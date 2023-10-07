#include "main.h"
#include <stdlib.h>
/**
 *  *  * *string_nconcat - concatenates n bytes of a string to another string
 *   *   * @s1: string to append to
 *    *    * @s2: string to concatenate from
 *     *     * @n: number of bytes from s2 to concatenate to s1
 *      *      *
 *       *       * Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

for (l1 = 0; s1[l1] != '\0'; l1++)
;
for (l2 = 0; s2[l2] != '\0'; l2++)
;
s = malloc(l1 + n + 1);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
