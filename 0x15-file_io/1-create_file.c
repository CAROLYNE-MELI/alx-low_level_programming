#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename:  name of the file to create and
 * text_content is a NULL terminated string to write to the file
 * @text_content: pointer to the contents to write to a file
 * Return: 1 on success, -1 on failure/if filename is NULL return -1/if
 * text_content is NULL create an empty file/
 * (file can not be created, file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
       
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
