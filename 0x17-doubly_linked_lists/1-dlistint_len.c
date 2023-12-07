#include "lists.h"
/**
 *dlistint_len - prints the numbers of nodes.
 *@h: head of nodes
 *Return: return the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
const dlistint_t *temp;

temp = h;
while (temp)
{
temp = temp->next;
n++;
}
return (n);
}
