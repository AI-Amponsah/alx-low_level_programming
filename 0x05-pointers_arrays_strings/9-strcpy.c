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

	for (i = 0; i <= strlen(src); i++)
	{
		dest[i] = src[i];
		if (*src == '\0')
			dest[i] = '\0';
	}


	return (dest);
}
