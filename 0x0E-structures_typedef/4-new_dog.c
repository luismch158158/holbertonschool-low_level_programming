#include "dog.h"
#include <stdlib.h>

/**
 * _length - function that return length of a string
 *
 * @s: string to evaluate
 *
 * Return: length of array
 */

int _length(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}



/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : variable to pointer
 * @src : variable to pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int total = 0;
	int i;

	while (*src != '\0')
	{
		total++;
		src++;
	}

	src = src - total;

	for (i = 0; i <= total; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}



/**
 * new_dog - Function that creates a new dog
 * @name: name of dog
 * @age:  age of dog
 * @owner: owner of dog
 * Return: struct pointer
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
	{
		return (NULL);
	}

	(*new).name = malloc(_length(name) + 1);
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL);
	}

	(*new).age = age;
	(*new).owner = malloc(sizeof(owner) + 1);
	if ((*new).owner == NULL)
	{
		free(new);
		free((*new).name);
		return (NULL);
	}

	_strcpy((*new).name, name);
	_strcpy((*new).owner, owner);
	return (new);
}
