#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the character
 */

void print_diagonal(int n)
{
	int i;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				_putchar(92);
			}
			else
			{
				for (k = 0; k < i; k++)
				{
					_putchar(' ');
					if (k == i - 1)
					{
						_putchar(92);
					}
				}
			}
			_putchar('\n');
		}
	}
}
