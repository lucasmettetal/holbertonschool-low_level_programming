#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wr = write(fd, text_content, len);
		if (wr == -1 || (size_t)wr != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
