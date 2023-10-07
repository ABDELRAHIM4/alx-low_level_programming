#include "main.h"
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{
int *p = malloc(b);
if (b == 0)
exit(98);
return (p);
}
	
	
