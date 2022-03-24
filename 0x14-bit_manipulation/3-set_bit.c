#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1
 * at a given index
 *
 * @n: number to evaluated
 *
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 0;

	if (index > 63)
		return (-1);

	number = 1 << index;
	*n = *n | number;

	return (1);
}
