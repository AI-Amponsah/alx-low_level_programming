#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints elements in an array
  * @a: pointer arguement
  * @n: Array size
  * Returns: void
  */

void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
