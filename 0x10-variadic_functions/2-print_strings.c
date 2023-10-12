#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *   * print_strings - ...
 *     * @separator: ...
 *       * @n: ...
 *         *
 *           * Return: ...
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list(p);
va_start(p, n);
while (i < n)
{
for (i = 0; i < n; i++)
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
}
i++;
}
printf("\n");
va_end(p);
}
