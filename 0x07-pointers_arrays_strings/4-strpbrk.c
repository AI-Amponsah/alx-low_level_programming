#include "main.h"
#include <string.h>

/**
 * _strpbrk - fills a block of memory with a character of n bytes
 * @s: String in consideration
 * @accept: matching string
 * Return: A pointer to s
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; i <= strlen(s); i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
return (s + 2);
}
}
}
return (NULL);
}
