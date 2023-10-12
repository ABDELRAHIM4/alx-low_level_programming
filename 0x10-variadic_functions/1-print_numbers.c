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
for (x = 0; x < n * 3; x += 3)
{
vprintf("%d", p);
if (x + 1 != n)
printf(",");
}
va_end(p);
}
}
