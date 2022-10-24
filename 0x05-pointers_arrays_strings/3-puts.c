#include "main.h"
#include <string.h>

/**
  * _puts - prints a string
  * @str: string pointer
  * Returns: Void
  */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
