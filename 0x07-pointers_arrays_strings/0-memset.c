#include "main.h"

/**
 * *_memset - funcion that fills memory with a constant byte
 * * @s : pointer to the memory area s
 * @b :  constant byte b
 * @n :bytes of the memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n || s[i] != '\0'; i++)
	{
		s[i] = b;
	}

	return (s);

}
