#include "lists.h"
#include <stdio.h>



size_t listint_len(const listint_t *h)
{
long unsigned int k = 0;
while (h != NULL)
{
h = h->next;
k++;
}
return(k);
}
