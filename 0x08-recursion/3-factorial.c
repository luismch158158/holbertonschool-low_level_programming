#include "main.h"

/**
 * factorial - funcion that returns the factorial of
 * a given number
 * @n: number to factorial
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
