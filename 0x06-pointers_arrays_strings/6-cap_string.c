#include "main.h"

/**
 * *cap_string - funcion that capitalizes all words of a string
 * @str: array to pointer
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int total_1 = 0;
	int j;
	int k;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	while (*(str + total_1) != '\0')
	{
		total_1++;
	}
	for (i = 0; i < total_1; i++)
	{
		if (i == 0)
		{
			if ((str[i]) >= 97 && ((str[i]) <= 122))
				str[i] = str[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			k = separators[j] - str[i];

			if (k == 0)
			{
				if ((str[i + 1]) >= 97 && ((str[i + 1]) <= 122))
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
