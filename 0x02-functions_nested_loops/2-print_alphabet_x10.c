#include "main.h"

/**
  *print_alphabet_x10 - prints lower-case alphabets 10 times
  *Return: Nothing is returned
  */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		 _putchar('\n');
	}
}
