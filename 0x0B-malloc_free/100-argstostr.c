#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: int input
 * @av: Double pointer array
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int j, p, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (p = 0; av[j][p]; p++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (p = 0; av[j][p]; p++)
	{
		str[r] = av[j][p];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
