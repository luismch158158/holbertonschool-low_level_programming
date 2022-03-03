#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - funcion that allocates memory using malloc
 * @b: number of bytes to the allocated memory
 *
 * Return: A pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	if (b == 0)
	{
		exit(98);
	}

	s = malloc(b);

	if (s == NULL)
	{
		free(s);
		exit(98);
	}

	return (s);

}
