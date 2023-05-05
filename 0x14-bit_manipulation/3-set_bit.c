#include "main.h"

/**
 * set_bit - To set the value of a bit to 1 at a given index
 * @n: the pointer of an unsigned long int
 * @index: the index of a bit
 *
 * Return: 1 if it worked, -1 if it did not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int j;

	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = (*n | j);

	return (1);

}
