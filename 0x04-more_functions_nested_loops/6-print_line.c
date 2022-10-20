#include "main.h"

/**
  *print_line - Prints a line
  *@n: arguement
  *Return: void
  */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('-');
		if (n <= 0)
		{
			_putchar('\n');
		}

	}
	_putchar('\n');
}
