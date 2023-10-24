#include "lists.h"
/**
 * add_nodeint_end - adds a new node
 *at the end of lists
 *@head : head of lists
 *@n : number of elements
 * Return: the address of the new element.or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (NULL);
}
else
{
temp->n = n;
temp->next = NULL;
ptr = *head;
if (*head == NULL)
{
*head = temp;
}
	else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
}
}
return (*head);
}
