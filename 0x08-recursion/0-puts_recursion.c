#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: input
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
