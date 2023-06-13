#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strdup - Duplicate to new memory space location
 * @str: Char
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *bcd;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	bcd = malloc(sizeof(char) * (i + 1));

	if (bcd == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bcd[r] = str[r];

	return (bcd);
}
