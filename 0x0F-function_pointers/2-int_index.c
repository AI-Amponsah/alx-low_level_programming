#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function to search for a number
 * @array: pointer to array
 * @size: number elements in array
 * @cmp: pointer to function
 * Return: int value
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
