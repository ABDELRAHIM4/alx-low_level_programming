#include "function_pointers.h"
/**
 *   * array_iterator - ...
 *     * @array: ...
 *       * @size: ...
 *         * @action: ...
 *           *
 *             * Return: ...
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array && size && action)
while (i < size)
{
action(array[i]);
i++;
}
}
