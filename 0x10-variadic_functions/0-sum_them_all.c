#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that sum of all it parameters
 * @n: numbers of parameters to passing
 * @...: parameters to passing in compilation
 * Return: sum of all its parameters
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list member;

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);


	va_start(member, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(member, int);

	va_end(member);
	return (sum);
}
