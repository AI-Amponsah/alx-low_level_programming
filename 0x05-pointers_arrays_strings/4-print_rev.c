#include "main.h"
#include <string.h>

/**
  * print_rev - prints a string in reverse
  * @s: Pointer arguement
  * Returns: void
  */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s + 1); i >= 0; i--)
	{
		if (*s != '\0')
		{
			_putchar(s[i]);
		}
	}

	_putchar('\n');
}
