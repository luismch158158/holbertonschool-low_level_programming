#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s : variable to pointer
 * Return: i is lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
