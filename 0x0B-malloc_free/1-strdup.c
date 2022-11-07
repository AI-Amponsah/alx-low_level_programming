#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - copies a string and returns a pointer
* @str: string pointer
* Return: pointer to the string copied
*/

char *_strdup(char *str)
{
int i;
char *p = malloc(sizeof(char));

if (str == NULL)
{
return (NULL);
}
if (p == NULL)
return (NULL);
for (i = 0; str[i] != '\0';)
{
p[i] = str[i];
i++;
}
return (p);
}
