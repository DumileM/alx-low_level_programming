#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: pointer to the name of the file.
 * @text_content: pointer to the string to add at the end of the file
 *
 * Return: 1 if successful and -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
