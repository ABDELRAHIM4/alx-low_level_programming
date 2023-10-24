#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of lists
 * @n: number of new element
 * @head:address of first element
 * Return:the address of the new element, or NULL if it failed
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
if (ptr != NULL)
{
ptr->n = n;
ptr->next = *head;
*head = ptr;
while (ptr->next != NULL)
{
ptr = ptr->next;
}

return (*head);
}
return (NULL);
}
