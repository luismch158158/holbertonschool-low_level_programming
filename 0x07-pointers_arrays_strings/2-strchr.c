#include "main.h"

/**
 * _strchr - funcion that locates a character in a string
 * @s: pointer to the array s
 * @c: character to find for first occurrence
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
			return (0);
		s++;
	}
}
