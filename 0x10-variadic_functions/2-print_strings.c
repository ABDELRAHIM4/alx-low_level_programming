#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *   * print_strings - ...
 *     * @separator: ...
 *       * @n: ...
 *         *
 *           * Return: ...
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *str;
va_list(p);
if (n > 0)
{
va_start(p, n);
while (i < n)
{
str = va_arg(p, char *);
if (str == NULL)
{
printf("nil");
}
else
{
printf("%s", str);
}
if (separator != NULL && i != n - 1)
printf("%s", separator);
i++;
}
va_end(p);
}
printf("\n");
}
