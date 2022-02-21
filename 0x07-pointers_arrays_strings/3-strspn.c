#include "main.h"

/**
 * _strspn - funcion that gets the length of a prefix substring
 * @s: array to pointer
 * @accept: only of bytes from accept
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char *new = accept;
	int marker = 0;
	unsigned int counter = 0;

	while (*s != '\0')
	{
		new = accept;
		marker = 0;

		while (*new != '\0')
		{
			if (*new == *s)
			{
				marker = 1;
				counter++;
				break;
			}

			new++;
		}
		if (marker == 0)
		{
			return (counter);
		}
		s++;
	}
	return (counter);
}
