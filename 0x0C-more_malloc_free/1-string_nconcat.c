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
	unsigned int n1, i, j, k, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	if (n >= j)
	{
		s = malloc((i + j + 1) * sizeof(char));
		n1 = j;
	}
	else
	{
		s = malloc((i + n + 1) * sizeof(char));
		n1 = n;
	}

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (p = 0; p < n1; p++)
		s[i + p] = s2[p];
	s[i + p] = '\0';

	return (s);
}
