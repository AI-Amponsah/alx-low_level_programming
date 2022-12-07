#include "main.h"



/**
 * cp - copies a file to another file
 *
 * @file_from: file.
 * @file_to: file
 * Return: void.
 */
void cp(char *file_from, char *file_to)
{
	char *buf[1024];
	int fd1, fd2, read1, write1, close_val;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 < 0)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
	}
	read1 = 1024;
	while (read1 == 1024)
	{
		read1 = read(fd1, buf, 1024);
		if (read1 < 0)
		{
			exit(98);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		}
		write1 = write(fd2, buf, read1);
		if (write1 < 0)
		{
			exit(99);
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		}
	}
	close_val = close(fd1);
	if (close_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_val);
		exit(100);
	}
	close_val = close(fd2);
	if (close_val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_val);
		exit(100);
	}
}

/**
  *main - command line arguement
  *@argc: arguement count
  *@argv: Arguement vector
  *
  *Return: Always 0
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
