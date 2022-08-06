#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of words (arguments).
 * @argv: pointers to each string formed by arguments.
 * Return: 0 (Succes).
 */

int main(int argc, char *argv[])
{
	int file_1, file_2;
	char buffer[1024];
	ssize_t look, spell;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_1 = open(argv[1], O_RDONLY);

	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);

	if (file_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (look > 0)
	{
		look = read(file_1, buffer, 1024);
		if (look == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		spell = write(file_2, buffer, look);
		if (spell == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(file_1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1), exit(100);

	if (close(file_2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_2), exit(100);

	return (0);
}
