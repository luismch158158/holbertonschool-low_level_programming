#include "main.h"
#include <stdlib.h>

/**
 * _strstr - funcion locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the
 * located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *new = needle;
	int marker = 0;

	while (*haystack != '\0')
	{
		while (*new != '\0')
		{
			marker = 0;

			if (*new == *haystack)
			{
				marker = 1;
			}
			if (marker == 0)
			{
				break;
			}
			new++;
		}
		haystack++;
	}
	if (*new == '\0')
	{
		return (needle);
	}
	return (NULL);
}
