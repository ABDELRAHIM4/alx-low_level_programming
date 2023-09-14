#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: size of line
 *
 * Return: void
 */
void print_line(int n)
{
	while (--n >= 0)
		putchar('_');
	putchar('\n');
}
