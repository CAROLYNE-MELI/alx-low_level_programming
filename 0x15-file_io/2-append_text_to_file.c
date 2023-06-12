#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: name of file
 * @text_content:  terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure/If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, _write, len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	_write = write(fd, text_content, len);
	if (_write == -1)
		return (-1);
	close(fd);
	return (1);
}
