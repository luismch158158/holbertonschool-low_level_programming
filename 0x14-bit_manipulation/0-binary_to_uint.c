#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s : variable to pointer
 * Return: i is lenght
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}

/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y
 * @x: number to raise to power
 * @y: power
 *
 * Return: value of x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}


/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int
 *
 * @b: pointer to a string
 *
 * Return:the converted number, or 0 if
 * there is one of more chars in the string b that is not 0 or 1
 * and 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, number = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			uint = uint + _pow_recursion(2, number);
		number++;
	}

	return (uint);
}
