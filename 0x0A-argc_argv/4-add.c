#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - program that adds positive numbers.
 *   * @argc: number of arguments
 *    * @argv: array with the arguments
 *     *
 *      * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;
	char *c;

	while (-- argc)

	{
	for (c = argv[argc]; *c; c++)
	{
		if (*c < '0' || *c > '9')
		{
			return (printf("ERROR \n"), 1);
		}
		i = atoi(argv[argc]);
	}
	}
	printf("%d\n", i);
	return (0);
}

