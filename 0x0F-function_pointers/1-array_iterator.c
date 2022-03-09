#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Function that executes a functions
 * given as a parameter on each element of an array
 * @array: array to executes
 * @size: size of array
 * @action: Is a pointer to the function to use
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (size == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);

}
