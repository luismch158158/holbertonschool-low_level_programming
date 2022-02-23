#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer to string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char *rec;
		rec = s + 1;
		_print_rev_recursion(rec);
		_putchar(*s);
	}
}
