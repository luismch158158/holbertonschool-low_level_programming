#include "main.h"

/**
 * is_prime_number - function that prints a string in reverse
 * @n: number to evaluated if prime
 *
 * Return: 1 if the input integer is a primer number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if (n % 3 == 0)
	{
		return (0);
	}
	if (n % 5 == 0)
	{
		return (0);
	}
	return (find_prime(4, n));
}

/**
 * find_prime - function recursive
 * @number: number to evaluated if prime
 * @y: number to test if it is divisible
 *
 * Return: 1 if the input integer is a primer number
 * otherwise return 0
 */


int find_prime(int y, int number)
{
	if (number % y == 0)
	{
		return (0);
	}
	if (y >= number / 2)
	{
		return (1);
	}
	y++;
	return (find_prime(y, number));
}

