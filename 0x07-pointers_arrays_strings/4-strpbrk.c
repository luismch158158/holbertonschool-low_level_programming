#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - funcion that searches a string of any
 * of a set of bytes
 * @s: array to pointer
 * @accept: only of bytes from accept
 *
 * Return: pointer to the bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *new = accept;

	while (*s != '\0')
	{
		new = accept;

		while (*new != '\0')
		{
			if (*new == *s)
			{
				return (s);
			}

			new++;
		}
		s++;
	}
	return (NULL);
}
