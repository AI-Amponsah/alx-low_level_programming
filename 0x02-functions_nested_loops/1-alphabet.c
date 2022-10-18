#include "main.h"

/**
  * void print_alphabet(void) - This prints out the alphabets 
  *
  *Return: Always zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

	return (0);
}
