#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - program that multiplies two numbers.
 *   * @argc: number of arguments
 *    * @argv: array with the arguments
 *     *
 *      * Return: always 0
*/
int main(int argc, char const *argv[])
{
	int i = 0;
	if(argc == 3)
	{
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d \n", i);
	}
	else 
	{
		printf("ERROR\n");
		return(1);
	}
	return (0);
}
