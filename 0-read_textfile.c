#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* Open file for reading */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/* Read from file */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Write to stdout */
	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Cleanup and return */
	free(buffer);
	close(fd);
	return (n_written);
}
