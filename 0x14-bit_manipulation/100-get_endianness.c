#include "main.h"

/**
 * get_endianness - Function that validates if is
 * big endianness or little endiannes
 *
 * Return: 1 if is little endiannes or 0 if is big endiannes
 */


int get_endianness(void)
{
	char *s = "Hola";

	if ((&s[3] - &s[0]) > 0)
		return (1);
	return (0);
}
