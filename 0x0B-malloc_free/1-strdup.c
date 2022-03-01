#include "main.h"
#include <stdlib.h>

/**
 * _strdup - funcion that pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter
 *
 * @str: string of parameter
 *
 * Return: array memory address
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int j;

	if (str == NULL)
	{
		return (0);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		continue;
	}

	j = j + 1;

	s = malloc((j) * sizeof(char));

	if (s == NULL)
	{
		return (0);
	}

	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}

	return (s);

}
