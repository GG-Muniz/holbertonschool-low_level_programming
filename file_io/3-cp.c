#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
#define CLOSE_ERR "Error: Can't close fd %d\n"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w, c;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), close(fd_from), exit(99);
	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), close(fd_from),
			close(fd_to), exit(99);
	}
	if (r == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), close(fd_from),
		close(fd_to), exit(98);
	c = close(fd_from);
	if (c == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_from), exit(100);
	c = close(fd_to);
	if (c == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_to), exit(100);
	return (0);
}
