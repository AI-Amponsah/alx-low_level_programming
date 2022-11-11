#include  "main.h"
#include <stdlib.h>
/**
  * malloc_checked - creates a block of memory
  *@b: bytes
  *Return: pointer to allocated memory block
  */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b * sizeof(int));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
