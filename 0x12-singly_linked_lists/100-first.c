#include <stdio.h>

/**
 * myfunpart - Apply the constructor to myfunpart() so that
 * is executed before main()
 * Return: always 0
 */
void myfunpart(void) __attribute__ ((constructor));

/**
 * myfunpart - implementation of myfunpart
 */
void myfunpart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}
