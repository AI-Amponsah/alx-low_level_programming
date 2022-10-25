#include "main.h"
#include <string.h>

/**
  * puts_half - prints half of a string
  * @str: pointer Arguement
  * Return: void
  */

void puts_half(char *str)
{

	unsigned int i;

	for (i = 1; i <= strlen(str); i++)
	{
		if ((i != '\0') && (i >= 5) && (i <= 9))
			_putchar(str[i]);
	}
	_putchar('\n');
}
