#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - main function.
 * @s1: first string.
 * @s2: second string.
 * Return: The pointer to str.
 */

char *str_concat(char *s1, char *s2)
{
	int size;
	int size2;
	int i, j;
	char *array;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (size = 0; s1[size] != '\0'; size++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	array = malloc(((size) + (size2 + 1)) * sizeof(char));

	if (!array)
	{
		return (NULL); /
	}
	for (i = 0; i < size; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < (size2 + 1); j++)
	{
		array[i + j] = s2[j];
	}
	return (array);
}
