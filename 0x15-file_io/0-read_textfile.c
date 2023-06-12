#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be printed
 * @letters:  letters is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * or if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t w;
	ssize_t r;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	return (w);
}
