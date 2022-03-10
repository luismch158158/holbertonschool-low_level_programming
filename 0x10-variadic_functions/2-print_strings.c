#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: string to be printed between the strings
 * @n: numbers of strings to passing
 * @...: parameters to passing in compilation
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *tmp;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(str, char*);
		if (i == (n - 1))
		{
			if (tmp == NULL)
				printf("%s\n", "(nil)");
			else
				printf("%s\n", tmp);
			break;
		}

		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		printf("%s", separator);
	}

	va_end(str);
}
