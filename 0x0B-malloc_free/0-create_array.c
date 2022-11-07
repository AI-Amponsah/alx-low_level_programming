#include "main.h"
#include <stdlib.h>

/**
*create_array - Creates a dynamic memory and stores an array
*@size: Size of array
*@c: array value
*Return: Character pointer
*/

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *b = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}
if (b == NULL)
{
return (NULL);
}

for (i = 0; i < size ; i++)
{
b[i] = c;
}

return (b);

}
