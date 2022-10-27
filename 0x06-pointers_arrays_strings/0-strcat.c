#include "main.h"
#include <string.h>

/**
  * _strcat - Concatenates a string
  *@dest: string arguement
  *@src: Second arguement
  * Return: Character
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
