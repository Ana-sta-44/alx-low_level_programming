#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The character to e be checked
 * Return: 1 for digit character or 0 for anythiny else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
