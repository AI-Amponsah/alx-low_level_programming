#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_strings - prints numbers
  *@separator: separator
  *@n: fixed argument number
  *Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	unsigned char *c;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(arg, unsigned char*);
		if (c == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", c);
			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(arg);
	printf("\n");
}
