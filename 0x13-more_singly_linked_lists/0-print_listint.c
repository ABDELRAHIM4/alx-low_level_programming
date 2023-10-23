#include "lists.h"
#include <stdio.h>
#include <stddef.h>
size_t print_listint(const listint_t *h)
{
size_t node = 0;
while (h != NULL)
{
printf("%d \n", h->n);
h = h -> next;
node ++;
}
return(node);
}
