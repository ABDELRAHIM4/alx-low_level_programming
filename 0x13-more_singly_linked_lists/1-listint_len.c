#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked
 * @h: head of list
 * Return: number of elements
*/


size_t listint_len(const listint_t *h)
{
int k = 0;
while (h != NULL)
{
h = h->next;
k++;
}
return (k);
}
