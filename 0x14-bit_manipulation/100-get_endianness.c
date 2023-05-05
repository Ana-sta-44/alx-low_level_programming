#include "main.h"

/**
 * get_endianness - checks the endianness whether big or little
 *
 * Return: 0 if big , 1 if little.
 *
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *a = (char *) &j;

	return (*a);
}
