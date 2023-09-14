#include <stdio.h>


/**
 * isprime - check if integer is divisible by any number other than 1.
 * @n: integer to check
 *
 * Return: 1 if n is prime,
 * otherwise 0.
 */
int isprime(long n)
{
	long i;
	long i_max = n / 2;

	for (i = 2; i < i_max; ++i)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
