#include "dog.h"
#include <stdio.h>

/**
 * free_dog - Function that free a dogs
 * @d: pointer to structure
 */


void free_dog(dog_t *d)
{
	if ((*d).name)
	{
		free((*d).name);
	}
	if ((*d).owner)
	{
		free((*d).owner);
	}
	free(d);
}
