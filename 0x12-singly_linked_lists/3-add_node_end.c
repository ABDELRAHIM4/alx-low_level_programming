#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/


list_t *add_node_end(list_t **head, const char *str)
{
list_t *x, *y;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);
	if (x->str == NULL)
	{
		free(x);
		return (NULL);
	}
	while (str[length])
		length++;
	x->len = length;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	y = *head;
	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
