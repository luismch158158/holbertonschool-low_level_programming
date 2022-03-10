#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print everything
 * @format: format
 * @...: parameters to passing in compilation
 */


void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *tmp;
	char *separ = "";

	va_start(arg, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separ, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separ, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separ, va_arg(arg, double));
					break;
				case 's':
					tmp = va_arg(arg, char *);
					if (tmp == NULL)
					{
						printf("%s(nil)", separ);
						break;
					}
					printf("%s%s", separ, tmp);
					break;
				default:
					i++;
					continue;
			}
			i++;
			separ = ", ";
		}
	}
	printf("\n");
	va_end(arg);
}
