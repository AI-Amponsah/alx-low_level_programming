#include "main.h"

/**
  *  print_last_digit - prints last digit
  * Return: Last digit
  *@j: number
  */

int print_last_digit(int j)
{
	j = j % 10;

	if (j < 0)
	{
		j *= -1;
	}
	_putchar(j + '0');
	return (j);
}
