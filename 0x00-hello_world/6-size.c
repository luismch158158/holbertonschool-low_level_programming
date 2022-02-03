/**
 * main --> Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
	printf("Size of a char: 1 byte(s))\n");
	printf("Size of a int: 4 byte(s)\n");
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a float: 1 byte(s))\n");
	return (0);
}
