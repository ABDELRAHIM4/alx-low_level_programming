#include "lists.h"
/**
 *delete_dnodeint_at_index - delete the node that the index is pointing to
 *@n: number of node
 *@index: number of node that want to delete
 *@ptr: pointer
 *Return: return 1 if it is success or -1 if not
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int n = 0;
dlistint_t *ptr;
ptr = *head;
while(ptr)
{
if (index == n)
{
ptr->prev->prev = ptr->prev;
ptr->next->next = ptr->next;
free(ptr);
}
n++;
ptr = ptr->next;
}
return (-1);
}
