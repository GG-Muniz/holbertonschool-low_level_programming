#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, n_written;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file with append flag */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, append it to the file */
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
