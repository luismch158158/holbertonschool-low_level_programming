#include "main.h"

/**
 * clear_bit - Function that set the value of a bit 0
 * at a given index
 *
 * @n: number to evaluated
 *
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 0;

	if (index > 63)
		return (-1);

	number = (~(1 << index));
	*n = *n & number;

	return (1);



}
