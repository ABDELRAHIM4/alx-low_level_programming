#include "lists.h"
/**
 *get_dnodeint_at_index - get the node that the index pointing to
 *@head: head of nodes
 *@index: the index of the node
 *Return: the node that the index is pointing to
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head)
{
if (i == index)
return (head);
i++;
head = head->next;
}
return (NULL);
}
