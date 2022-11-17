#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_numbers - prints numbers
  *@separator: separator
  *@n: fixed argument number
  *Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg,  n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

