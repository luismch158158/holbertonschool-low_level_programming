#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - funcion that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: 2 dimensional array memory address
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;
	int k;
	int p;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(void *));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc((width) * sizeof(int));

		if (s[i] == NULL)
		{
			for (p = 0; p < i; p++)
				free(s[p]);
			free(s);
			return (NULL);
		}
	}

	for (k = 0 ; k < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[k][j] = 0;
		}
	}

	return (s);
}
