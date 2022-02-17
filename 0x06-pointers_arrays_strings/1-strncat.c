#include "main.h"

/**
 * *_strncat - funcion that concatenates two strings
 * overwriting the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * It will use at most n bytes from src
 * and src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest : variable to pointer
 * @src : variable to pointer
 * @n : use n bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int total_1 = 0;
	int total_2 = 0;

	while (*dest != '\0')
	{
		total_1++;
		dest++;
	}

	while (*(src + total_2) != '\0')
	{
		total_2++;
	}

	for (i = 0; i < n; i++)
	{
		if (i <= total_2)
		{
			*dest = *dest + *(src + i);
			dest++;
		}
		else
		{
			break;
		}
	}
	if (n < total_2)
	{
		dest = dest - total_1 - n;
	}
	else
	{
		dest  = dest - total_1 - total_2 - 1;
	}

	return (dest);

}
