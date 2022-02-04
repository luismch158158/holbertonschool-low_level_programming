#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Return value "n" and "i" (success)
 */

int main(void)
{
	int n;
	int i;

	n = 65;
	i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (n < 91)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}

