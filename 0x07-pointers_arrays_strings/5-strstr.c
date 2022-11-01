#include "main.h"
#include <string.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

unsigned int i, j;
i = 0;

while (haystack[i])
{
while (needle[j])
{
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
i++;
}
return ('\0');
}
