#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				b++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}

