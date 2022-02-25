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
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)),
		char **argv __attribute__((unused)))
{
	printf("%s\n", argv[0]);
	return (0);
}
