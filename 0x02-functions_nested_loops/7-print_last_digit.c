#include "main.h"

/**
  *  print_last_digit - prints last digit
  * Return: Last digit
  * @j: number
  * @n: Arguement
  */

int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = -n;

	j = n % 10;
	_putchar(j + '0');

	return (j);

}
