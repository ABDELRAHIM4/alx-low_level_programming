#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t x = 0;
int d;
listint_t *t;

if (!h || !*h)
return (0);

while (*h)
{
d = *h - (*h)->next;
if (d > 0)
{
t = (*h)->next;
free(*h);
*h = t;
x++;
}
else
{
free(*h);
*h = NULL;
x++;
break;
}
}
*h = NULL;
return (x);
}
