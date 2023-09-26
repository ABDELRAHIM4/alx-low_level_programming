#include "main.h"
#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: input pointer
 *
 * Return: return nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, k;

	i = 0;
	k = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			k = i;
			putchar('\n');
		}

		putchar(a[i / 8][i - k]);
		i++;
	}
	putchar('\n');
}
