#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: file.
 * @text_content: text to be appeneded.
 * Return: 1 on success, -1 failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i]; i++)
	{
		;
	}
	w = write(fd, text_content, i);
	close(fd);
	return (w == -1 ? -1 : 1);
}

