#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: First array
 * @s2: Second array to concatenates
 * @n: number of bytes to concatenates of s2 array
 *
 * Return: array memory address
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[i] != '\0'; j++)
		continue;
	j = j + 1;

	if (n >= j)
	{
		s = malloc((i+j) * sizeof(char));

		if (s == NULL)
		{
			free(s);
			return (NULL);
		}
	}
	if (n < j)
	{
		s = malloc ((i+n) * sizeof(char));

		if (s == NULL)
		{
			free(s);
			return(NULL);
		}
	}

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}

	if (n >= j)
	{
		for (p = 0; p < j; p++)
		{
			s[i + p] = s[p];
		}
	}

	return (s);
}
