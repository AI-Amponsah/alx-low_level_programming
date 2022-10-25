#include "main.h"
#include <string.h>

/**
  * *_strcpy - Copying a string
  * @dest: string pointer
  * @src: string pointer
  * Return: char
  */

char *_strcpy(char *dest, char *src)
{
	unsigned int i;

	for (i = 0; i <= strlen(src + 1); i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
