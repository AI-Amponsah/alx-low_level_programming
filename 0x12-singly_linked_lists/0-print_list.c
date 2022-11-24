#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - prints all the elements of a list_t list.
 *@h: pointer to the structure
 *
 *Return: number of nodes in the list
 *
 */
size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		e++;
	}
	return (e);
}
