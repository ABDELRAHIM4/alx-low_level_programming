#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *x = head;
listint_t *f = head;

if (!head)
return (NULL);

while (x && f && f->next)
{
f = f->next->next;
x = x->next;
if (f == x)
{
x = head;
while (x != f)
{
x = x->next;
f = f->next;
}
return (f);
}
}

return (NULL);
}
