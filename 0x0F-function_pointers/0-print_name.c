#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - prints a name
  *@f: function pointer
  *@name: String name
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	{
		f(name);
	}
}
