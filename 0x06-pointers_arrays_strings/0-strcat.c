#include "main.h"

/**
 * *_strcat - funcion that concatenates two strings
 * overwriting the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : variable to pointer
 * @src : variable to pointer
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int total_1 = 0;
	int total_2 = 0;

	while (*dest != '\0')
	{
		dest++;
		total_1++;
	}

	while (*(src + total_2) != '\0')
	{
		total_2++;
	}


	for (i = 0; i <= total_2 ; i++)
	{
		*dest = *dest + *(src + i);
		dest++;
	}

	dest = dest - total_1 - total_2 - 1;

	return (dest);
}
