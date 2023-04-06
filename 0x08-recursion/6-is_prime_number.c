#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - check if number if prime
 * @n: the number to check.
 * @i: the iteration times
 *
 * Return: 1 for prime or 0 if not
 */

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
