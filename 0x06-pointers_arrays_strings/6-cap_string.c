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
	int l;
	char separators_1[6] = {' ', '\t', '\n', ',', ';', '.'};
	char separators_2[7] = {'!', '?', '"', '(', ')', '{', '}'};
	char separators[13];

	for (l = 0; l < 13; l++)
	{
		if (l < 6)
			separators[l] = separators_1[l];
		else if (l >= 6 && l < 13)
			separators[l] = separators_2[l - 7];
	}
	while (*(str + total_1) != '\0')
	{
		total_1++;
	}
	for (i = 0; i <= total_1; i++)
	{
		if (i == total_1)
			break;
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
