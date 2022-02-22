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
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
