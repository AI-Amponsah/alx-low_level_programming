#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums up variable numbers
  *@n: fixed variable number
  *
  *Return: int value
  */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;


	if (n == 0)
	{
		return (0);
	}

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	return (sum);
	va_end(arg);
}
