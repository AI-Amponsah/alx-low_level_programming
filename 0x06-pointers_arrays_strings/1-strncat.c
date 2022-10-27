#include "main.h"
#include <string.h>

/**
  * *_strncat - String concatenation
  *@dest: Pointer arguement
  *@src: Pointer arguement
  *@n: byte
  * Return: String
  */

char *_strncat(char *dest, char *src, int n)
{

	char *str = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*str++ = *src++;

	}
	return (dest);
}
