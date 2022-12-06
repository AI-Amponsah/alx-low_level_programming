#include "main.h"
/**
 * read_textfile - reads and writes a text file Stdout 
 *@filename: name of file
 *@letters: length of letters to be read
 * Return: Number of letters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r , w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if(buffer == NULL)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	close (fd);
	free(buffer);

	return (w);
}


