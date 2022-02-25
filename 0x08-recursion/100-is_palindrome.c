#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindro0me and 0 if not
 * @s: pointer to array
 *
 * Return: 1 if a string is a palindrome
 * and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _len(s);

	return (check_palindrome(s, (s + len - 1)));
}

/**
 * _len - function that calculate length of string
 * @s: pointer to array
 *
 * Return: length of array
 */

int _len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_len(s)));
}

/**
 * check_palindrome - function that returns if is palindrome or not
 * @start: start of string
 * @end: end of string
 *
 * Return: 1 if a string is a palindrome
 * and 0 if not
 */

int check_palindrome(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start == *end)
	{
		return (check_palindrome(start + 1, end - 1));
	}
	return (0);
}

