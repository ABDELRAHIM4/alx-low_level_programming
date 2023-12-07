#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 *
 * @h: pointer to pointer of the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (*h == NULL)
{
*h = new_node;
return (new_node);
}
if (idx == 0)
{
new_node->next = *h;
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

temp = *h;
while (idx-- > 1)
temp = temp->next;
new_node->next = temp->next;
new_node->prev = temp;
temp->next = new_node;
if (new_node->next)
new_node->next->prev = new_node;
return (new_node);
}
