#include "main.h"

/**
 * *_strchr - funcion that locates a character in a string
 * * @s : pointer to the array s
 * @c :  character to find for first occurrence
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s+i) != '\0')
	{
		if (s[i] == c)
		{
			s++;
			return (s);
			break;
		}
		s++;
		i++;
	}

	return (NULL);

}
