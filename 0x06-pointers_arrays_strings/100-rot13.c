#include "main.h"

/**
 * *rot13 - funcion that encodes a string usin rot13
 * @str: array to pointer
 *
 * Return: str
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; (*(str + i) != '\0'); i++)
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
				break;
			}
			str[i] = str[i] - 13;
			break;
		}
	}
	return (str);
}
