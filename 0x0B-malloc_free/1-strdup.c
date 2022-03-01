#include "main.h"

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

	for (j = 0; str[j] != '\0'; j++)
	{
		continue;
	}

	s = malloc((j) * sizeof(char));

	if (s == NULL || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}

	return (s);

}
