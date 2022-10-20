#include "main.h"

/**
  * print_most_numbers - prints most numbers
  *@c: variable
  * Return: void
  */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
	}
	_putchar('\n');
}
