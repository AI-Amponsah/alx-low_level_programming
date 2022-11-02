#include "main.h"
#include <string.h>

/**
  * _puts_recursion - prints a string
  * @s: String arguement as pointer
  * Return: void
  */

void _puts_recursion(char *s)
{

unsigned int i;

for (i = 0; i <= strlen(s); i++)
{
	_putchar(s[i]);
}
_putchar('\n');
}
