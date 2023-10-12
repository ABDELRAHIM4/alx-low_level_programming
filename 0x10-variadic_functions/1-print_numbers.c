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
va_list(p);
unsigned int x;
va_start(p, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(p, int));
if (x != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(p);
}
