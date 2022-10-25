#include "main.h"
#include <string.h>

/**
  * puts2 - Prints part of a string
  * @str: pointer
  * Return: void
  */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i <= strlen(str + 1); i++)
	{
		if (*str != '\0' && i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
