#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 *
 * @filename: a point that store the name of the file.
 * @letters: number of letters in the read file.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t a, b, c;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	a = open(filename, O_RDONLY);
	b = read(a, buff, letters);
	c = write(STDOUT_FILENO, buff, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(a);

	return (c);
}

