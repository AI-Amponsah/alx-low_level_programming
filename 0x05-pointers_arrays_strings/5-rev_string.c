#include "main.h"
#include <string.h>

/**
  * rev_string - Reverse string
  * @s: Pointer arguement
  * Return: void
  */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
