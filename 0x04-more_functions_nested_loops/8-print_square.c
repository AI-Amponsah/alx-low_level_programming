#include "main.h"

/**
  * print_square - Printing a square
  * @size: Function Arguement
  *Return: void
  */

void print_square(int size)
{
	int i, k;

	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= size; k++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		 _putchar('\n');
	}
	_putchar('\n');

}
