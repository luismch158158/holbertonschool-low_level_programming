#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function that print numbers, followed by
 * a new line
 * @separator: string to be printed between numbers
 * @n: numbers of parameters to passing
 * @...: parameters to passing in compilation
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	if (separator == NULL)
		return;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(number, int));
			break;
		}

		printf("%d", va_arg(number, int));
		printf("%s", separator);
	}
	va_end(number);
}
