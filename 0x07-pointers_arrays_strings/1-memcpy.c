#include "main.h"

/**
 * *_memcpy - funcion that copies memory area
 * @dest : array dest
 * @src : array source
 * @n :bytes from memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n || dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
