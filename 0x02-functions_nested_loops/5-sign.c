#include "main.h"

/**
  * print_sign - prints the sign of numbers
  *Return: Multiple values
  *@n: Accepts integer values
  */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
