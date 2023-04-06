#include "main.h"

/**
 * helperfunction - checks if sqrt of number exists
 * @n: number.
 * @psqrt: possible sqrt of number.
 *
 * Return: sqrt of number of -1 for error.
 */
int helperfunction(int n, int psqrt)
{
	if ((psqrt * psqrt) == n)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > n)
			return (-1);
		else
			return (helperfunction(n, psqrt + 1));
	}

}

/**
  *_sqrt_recursion - return the natural square root of a number.
  *@n: number to find sqrt of.
  *
  *Return: squareroot of n.
  *-1 if n does not have a natural sqrt.
  */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
