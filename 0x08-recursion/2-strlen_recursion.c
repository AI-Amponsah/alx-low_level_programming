#include "main.h"


/**
*  _strlen_recursion - prints length of a string
* @s: pointer arguement
* Return: integer vakue
*/

int _strlen_recursion(char *s)
{
unsigned int i;
i = 0;
if (s[i] == '\0')
{
return (0);
}
else
{
return  (1 + _strlen_recursion(s + 1));
}
}
