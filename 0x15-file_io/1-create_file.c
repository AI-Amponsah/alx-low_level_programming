#include "main.h"

/**
 * create_file - creates a file with a text
 *
 * @filename: file.
 * @text_content: contents to be written in file.
 * Return: Actual number of contents in file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if ((fd) == -1)
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (i = 0; text_content[i]; i++)
	{
		w = write(fd, text_content, i);
	}
	if ((w) == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
