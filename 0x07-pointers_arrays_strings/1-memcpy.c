#include "main.h"

/**
* _memcpy - Copies data from one memory address to another
* @dest: Destinantion memory
* @src: Source memory
* @n: Bytes
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (*src != '\0' && n--)
{
dest[i] = src[i];
i++;

}
dest[i] = '\0';
return (dest);
}
