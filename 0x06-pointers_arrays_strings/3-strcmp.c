#include "main.h"

/**
 * *_strcmp - funcion that compares two strings
 * @s1 : array to pointer
 * @s2 : array to pointer
 * Return: int that result of strcmp function
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int total_1 = 0;
	int total_2 = 0;
	int higher = 0;
	int j = 0;

	while (*(s1 + total_1) != '\0')
	{
		total_1++;
	}

	while (*(s2 + total_2) != '\0')
	{
		total_2++;
	}

	if (total_1 > total_2)
		higher = total_1;
	else
		higher = total_2;

	for (i = 0; i < higher; i++)
	{
		j = s1[i] - s2[i];

		if (j > 0)
			break;

		if (j < 0)
			break;
	}
	return (j);
}
