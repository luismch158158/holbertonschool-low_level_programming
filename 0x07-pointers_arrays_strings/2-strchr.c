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
	int i;
	int j = 0;
	char new[98];

	char *new2 = new;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				new2[j] = s[i];
				j++;
				i++;
			}
		break;
		}

	}

	if (j == 0)
	{
		new2 = NULL;
	}

	return (new2);

}
