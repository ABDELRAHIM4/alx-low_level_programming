#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *   * sum_them_all - ...
 *     * @n: ...
 *       *
 *         * Return: ...
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int x, s = 0;

if (n == 0)
{
return (0);
}
else
{
va_list(p);
va_start(p, n);
for (x = 0; x < n; x++)
s += va_arg(p, int);
va_end(p);
return (s);
}
}
