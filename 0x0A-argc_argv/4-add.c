#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * check_number - check string if is a number
 * @s: String to evaluated
 *
 * Return: 0 if the string evaluated contain symbols
 * that are not digits or 1 if the string evaluated
 * is a number
 */


int check_number(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (isdigit(s[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}



/**
 * main - check the code
 * @argc: Count the number of things that I pass
 * on the command line when I run this program
 * @argv: Array that contains the string values
 * of things that were entered on the command line
 * when I run this program
 *
 * Return: 1 if one of the number contains symbols
 * that are not digits or 0 if success
 */

int main(int argc __attribute__((unused)),
			 char **argv __attribute__((unused)))
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((check_number(argv[i])) == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
