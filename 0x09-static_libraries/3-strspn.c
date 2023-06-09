#include "main.h"

/**
 *  _strspn - Get the length of a prefix substring.
 *  @s: The string to be searched.
 *  @accept: The substring to be measured.
 *
 *  Return: the number of bytes in initial segment of s
 *  consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				bytes++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
