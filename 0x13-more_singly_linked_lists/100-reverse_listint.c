#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *ptr = NULL;
listint_t *t = NULL;

while (*head)
{
ptr = (*head)->next;
(*head)->next = t;
t = (*head);
*head = ptr;
}
*head = t;
return (*head);
}
