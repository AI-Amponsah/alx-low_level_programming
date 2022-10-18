#include "main.h"

/**
 * print_last_digit - checks number
 * @j: arguenent.
 *@i: variable
 * Return: i
 */
int print_last_digit(int j)

{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
