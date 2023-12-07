#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp;
size_t n = 0;
temp = h;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
n++;
}
return n;
}
