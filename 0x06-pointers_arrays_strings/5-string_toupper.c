#include "main.h"

/**
 * *string_toupper - funcion that changes all lowercase
 * letters of a string to uppercase
 * @str: array to pointer
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;
	int total_1 = 0;

	while (*(str + total_1) != '\0')
	{
		total_1++;
	}

	for (i = 0; i < total_1; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
