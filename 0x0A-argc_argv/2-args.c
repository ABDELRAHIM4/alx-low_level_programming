#include <stdio.h>
/**
 *  * main - program that prints all arguments it receives.
 *   * @argc: number of arguments
 *    * @argv: array with the arguments
 *     *
 *      * Return: always 0
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s", argv[i]);
		i++;
	}
	return (0);
}
