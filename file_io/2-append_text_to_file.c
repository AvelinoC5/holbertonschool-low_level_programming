#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, t, i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		t = write(file, text_content, i);
		if (t != i)
			return (-1);
	}

	close(file);

	return (1);
}
