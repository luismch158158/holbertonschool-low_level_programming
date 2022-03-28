#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: file to process
 * @letters: number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r1, r2;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r1 = read(fd, buf, letters);
	if (r1 == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	r2 = write(STDOUT_FILENO, buf, r1);
	if (r2 == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (r1);
}
