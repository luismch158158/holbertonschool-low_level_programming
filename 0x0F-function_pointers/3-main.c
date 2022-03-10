#include "3-calc.h"

/**
 * main - executes functions that performs
 * simple operations
 * @argc: number of arguments to compilation
 * @argv: array of arguments to compilation
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{

	int num1, num2, calc;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((get_op_func(argv[2])) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	if (((*argv[2] == '/') || (*argv[2] == '%')) && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	p = get_op_func(argv[2]);

	calc = p(num1, num2);

	printf("%d\n", calc);

	return (0);
}
