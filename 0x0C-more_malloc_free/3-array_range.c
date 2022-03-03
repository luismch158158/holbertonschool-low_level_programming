#include "main.h"
#include <stdlib.h>

/**
 * array_range - funcion that creates an array of integers
 * @min: value min
 * @max: value max
 *
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *s;
	int i, j;

	if (min > max)
		return (NULL);
	if (max + min < 0)
		j = (max + min) * -1;
	else
		j = max - min;


	s = malloc((j + 1) * sizeof(int));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i <= max; i++)
	{
		s[i] = min + i;
	}

	return (s);
}
