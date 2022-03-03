#include "main.h"
#include <stdlib.h>

/**
 * array_range - funcion that creates an array of integers
 * @min: first number
 * @max: last number
 *
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *s;
	unsigned int i, j;

	if (min > max)
		return (NULL);
	if (min - max < 0)
		j = (min - max) * -1;
	else
		j = max - min;


	s = malloc((j + 1) * sizeof(int));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i <= j; i++)
	{
		s[i] = min + i;
	}

	return (s);
}
