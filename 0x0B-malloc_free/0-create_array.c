#include <stdio.h>
#include <stdlib.h>

/**
*create_array - Creates a dynamic memory and stores an array
*@size: Size of array
*@c: array value
*Return: Character pointer
*/

char *create_array(unsigned int size, char c)
{
char *b = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}
else if (malloc == NULL)
{
return (NULL);
}
int i = 0;

for (i = 0; i < size ; i++)
{
b[i] = c;
}

return (b);

}
