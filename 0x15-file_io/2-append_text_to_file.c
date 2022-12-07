#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
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

    return (w == -1 ? -1: 1);
}

