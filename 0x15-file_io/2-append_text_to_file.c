#include "main.h"

/**
 * append_text_to_file - Function that appends text
 * at the end of a file
 *
 * @filename: is the name of the file to create
 * @text_content: is a string to write
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r1, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{

		while (text_content[i])
		{
			i++;
		}

		r1 = write(fd, text_content, i);
		if (r1 == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
