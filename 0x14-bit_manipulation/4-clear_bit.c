#include "main.h"

/**
 * clear_bit - the value to set a bit to 0 at a given index
 * @index: index of a bit
 * @n: the pointer of an unsigned long int.
 *
 * Return: 1 if it worked, -1 if it did not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n && m)
		*n ^= m;

	return (1);
}
