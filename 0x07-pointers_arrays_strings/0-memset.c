#include "main.h"
#include <string.h>

/**
*_memset - fills a block of memory with a character of n bytes
* @s: buffer memory
* @b: character value
* @n: bytes
* Return: Pointer to the buffer
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*s = b;
s++;
}
*s = '\0';
return (s);
}
