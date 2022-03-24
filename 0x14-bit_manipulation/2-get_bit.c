#include "main.h"

/**
 * get_bit - Function that returns the value of
 * a bit at a given index
 *
 * @n: number to evaluated
 *
 * @index: is the index
 *
 * Return: the value of the bit at index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j = 0;

	if (index == 0)
		return ((n & 1));

	if (n < 2 && index > 0)
		return (-1);

	if (n > 1 || index == 0)
	{
		j = get_bit(n >> 1, (index - 1));
	}
	return (j);
}
