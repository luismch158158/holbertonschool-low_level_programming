#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest : variable to pointer
 * @src : variable to pointer
 * @n : use n bytes from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int total_1 = 0;
	int total_2 = 0;

	while (*(dest + total_1) != '\0')
	{
		total_1++;
	}

	while (*(src + total_2) != '\0')
	{
		total_2++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
