#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * close_fd - closes a file descriptor and handles error
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_file - opens a file and handles read/write errors
 * @filename: file name
 * @flags: flags for open
 * @mode: permissions (used only when creating)
 * @is_from: 1 if source file, 0 if destination file
 *
 * Return: file descriptor
 */
int open_file(char *filename, int flags, mode_t mode, int is_from)
{
	int fd;

	if (is_from)
		fd = open(filename, flags);
	else
		fd = open(filename, flags, mode);

	if (fd == -1)
	{
		if (is_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - copies all data between two file descriptors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @from: source file name (for error messages)
 * @to: destination file name (for error messages)
 */
void copy_content(int fd_from, int fd_to, char *from, char *to)
{
	char buffer[BUF_SIZE];
	ssize_t rd, wr;

	while ((rd = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(av[1], O_RDONLY, 0, 1);
	fd_to = open_file(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664, 0);

	copy_content(fd_from, fd_to, av[1], av[2]);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
