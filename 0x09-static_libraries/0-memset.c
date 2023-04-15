#include "main.h"

/**
 * _memset - fills the first memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
