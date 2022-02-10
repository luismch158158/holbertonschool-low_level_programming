#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times of character _
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');


}
