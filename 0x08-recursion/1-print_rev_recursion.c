#include "main.h"
#include <string.h>

/**
* _puts_recursion - prints reverse of a string
* @s: pointer arguement
"* Return: void
*/

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
}
