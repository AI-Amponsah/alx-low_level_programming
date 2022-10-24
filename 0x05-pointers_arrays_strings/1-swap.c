#include "main.h"

/**
  * swap_int - swaps two numbers
  * @a: first pointer arguement
  * @b: Second pointer arguement
  * Return: Always 0
  */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
