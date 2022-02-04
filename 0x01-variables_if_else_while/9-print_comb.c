#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Return value "n" and "i" (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i <= '8')
		{
			putchar(32);
			putchar(44);
			putchar (32);
		}
	}
	putchar('\n');
	return (0);

}
