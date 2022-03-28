#include "main.h"

/**
 * copy_file - Function that copies the content fo a file
 * to another file
 *
 * @file_from: file from copy
 * @file_to: file to copy
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, r1, r2;
	char buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1 || !file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r1 = read(fd1, buffer, 1024)) > 0)
	{
		r2 = write(fd2, buffer, r1);
		if (r2 != r1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd1);
			exit(99);
		}
	}

	if (r1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd1);
		exit(98);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - check the code
 *
 * @ac: Count the number of things that I pass
 * on the command line when I run this program
 *
 * @av: Array that contains the string values
 * of things that were entered on the command line
 * when I run this program
 *
 * Return: Always 0
 *
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(av[1], av[2]);
	exit(0);
}
