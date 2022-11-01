#include "main.h"
#include <string.h>

/**
 * _strspn - returns length of initial substring
 * @s: String to be scanned
 *@accept: String with charw to match
 * Return: Always zero
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (0);
}
