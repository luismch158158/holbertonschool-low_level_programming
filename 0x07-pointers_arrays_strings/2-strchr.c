#include "main.h"
#include <stdlib.h>

/**
 * _strchr - funcion that locates a character in a string
 * @s: pointer to the array s
 * @c: character to find for first occurrence
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
