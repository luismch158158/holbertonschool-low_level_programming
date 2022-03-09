#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: pointer to name
 * @d: pointer to function
 */


void print_name(char *name, void (*d)(char *))
{
	if (name == 0 || d == 0)
		return;

	(*d)(name);
}
