#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *   * print_numbers - ...
 *     * @separator: ...
 *       * @n: ...
 *         *
 *           * Return: ...
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
if (separator != NULL)
{
va_list(p);
va_start(p, n);
for (x = 0; x < n; x++)
{
vprintf("%d", p);
if (x + 1 != n)
{
printf(", ");
}
else
{
printf("\n");
}
}
va_end(p);
}
}
