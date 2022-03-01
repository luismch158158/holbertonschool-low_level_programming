#include "main.h"
#include <stdlib.h>

/**
 * str_concat - funcion that concatenates two strings
 * @s1: array number 1
 * @s2: array number 2
 *
 * Return: pointer to two strings concatenates
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	for (i = 0; s1[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		continue;
	}

	j = j + 1;

	s = malloc((i + j) * sizeof(char));

	if (s == NULL)
	{
		return (0);
	}

	for (k = 0; k < (i + j) ; k++)
	{
		if (k < i)
		{
			s[k] = s1[k];
		}
		if (k >= i)
		{
			s[k] = s2[k - i];
		}
	}

	return (s);

}
