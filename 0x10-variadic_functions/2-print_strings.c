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
va_list p;
unsigned int i = 0;
char *str;
if (n > 0)
{
va_start(p, n);
while (i < n)
{
str = va_arg(p, char *);
if (str == NULL)
{
printf("%s", "(nil)");
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
