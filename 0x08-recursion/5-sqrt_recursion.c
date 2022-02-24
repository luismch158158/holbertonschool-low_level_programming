#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number
 * @n: number of square root
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	int root_square_finder;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}

	root_square_finder = 0;

	return (_find(root_square_finder, n));
}

/**
 * _find - function that iterates values
 * to obtain the square root
 * @k: iterative number that approximates the value
 * of the square root
 * @j: number to take square root
 *
 * Return: square root result after iteration
 */

int _find(int k, int j)
{
	int ite;

	if (k == j / 2)
	{
		return (-1);
	}

	k = k + 1;
	ite = k * k;

	if (ite == j)
	{
		return (k);
	}
	return (_find(k, j));
}
