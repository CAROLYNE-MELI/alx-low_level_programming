#include <stdlib.h>
#include "main.h"

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	file_from = open(argv[1], O_RDONLY);
	_read = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		_write = write(file_to, buffer, _read);
		if (file_to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (_read > 0);
	free(buffer);
	close(file_from);
	close(file_to);
	if (close(file_from) == -1 || close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d%d\n", file_from, file_to);
		exit(100);
	}
	return (0);
}
/**
 * error_file - checks for possibility of opening a file
 * @file_to: to coppy to
 * @file_from: copping from
 * @argv: number of arguments
 * Return: void
 */
void error_file(int file_to, int file_from, char *argv[])
{
	if (file_from ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
		exit(99);
	}
}
