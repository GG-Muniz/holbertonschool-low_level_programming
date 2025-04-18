#include "main.h"

/**
 * create_file - creates a file with specified content
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_written;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file with appropriate flags and permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		/* Calculate length of text_content */
		while (text_content[len])
			len++;

		/* Write text_content to file */
		n_written = write(fd, text_content, len);
		if (n_written == -1 || n_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close file and return success */
	close(fd);
	return (1);
}
