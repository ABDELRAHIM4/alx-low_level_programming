#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 *                of a dlistint_t linked list
 *
 * @head: double pointer to the head of the linked list
 *
 * Return: the sum of all the data (n) of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *ptr;
if (head == NULL)
return (0);
ptr = head;
while(ptr)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
