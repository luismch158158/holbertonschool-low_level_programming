#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get form one number to
 * another
 *
 * @n: number 1 to evaluated
 *
 * @m: number 2 to evaluated
 *
 * Return: number of bits need flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = 0;
	unsigned long int counter = 0;

	xor = n ^ m;

	while (xor >= 1)
	{
		counter = counter + (xor & 1);
		xor = xor >> 1;
	}

	return (counter);

}
