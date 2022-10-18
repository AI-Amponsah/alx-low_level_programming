#include "main.h"

/**
  * print_alphabet - Prints lowercase alphabets
  * Return: No return value
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
