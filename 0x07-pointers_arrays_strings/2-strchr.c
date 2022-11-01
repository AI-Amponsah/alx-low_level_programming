#include "main.h"
#include <string.h>

/**
* _strchr - points to afirst occurrence of a  char in a string
* @s: string
* @c: character
* Return: string pointer
*/

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; i < strlen(s + 1); i++)
{
if (s[i] == c)
{
return (s + 2);
}
}
return (!c ? s : NULL);
}
