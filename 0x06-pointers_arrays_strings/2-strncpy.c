#include "main.h"
#include <string.h>

/**
  * _strncpy - Copies a string
  * @dest: Destination pointer
  * @src: Source pointer
  * @n: byte
  *Return: Char string
  */

char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*str++ = *src++;
	}
	return (dest);

}
