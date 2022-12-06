#ifndef _MAIN_H
#define _MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
