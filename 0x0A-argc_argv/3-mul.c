#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 * @argc: Count the number of things that I pass
 * on the command line when I run this program
 * @argv: Array that contains the string values
 * of things that were entered on the command line
 * when I run this program
 *
 * Return: Always 0 if the program receive two arguments
 * otherwise return 1.
 */

int main(int argc __attribute__((unused)),
		char **argv __attribute__((unused)))
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
