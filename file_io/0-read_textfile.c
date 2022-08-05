#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to filename.
 * @letters: amount of file content.
 * Return: the actual number of letters or 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int i, t;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	i = read(file, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}

	buf[i] = '\0';

	close(file);

	t = write(STDOUT_FILENO, buf, i);
	if (t < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (t);
}
