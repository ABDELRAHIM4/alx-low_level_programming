#include "main.h"
#include <stdlib.h>
/**
 *  * _realloc - reallocates a memory block using malloc and free.
 *   * @ptr:  is a pointer to the memory previously allocated with a
 *    * call to malloc: malloc(old_size).
 *     * @old_size: is the size, in bytes, of the allocated space for ptr
 *      * @new_size: is the new size, in bytes of the new memory block
 *       *
 *        * Return: pointer to reallocated memory, if conditions met,
 *         * else, return based on specific conditions
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *p;
if (new_size == old_size)
return (NULL);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
p = malloc(new_size);
if (p == (NULL))
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
*((char *)p + i) = *((char *)ptr + i);
free(ptr);
}
return (p);
}
