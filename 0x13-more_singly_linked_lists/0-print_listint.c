#include <stdio.h>
#include "lists.h"

/**
  *print_listint - prints list in a linked list
  *@h: head pointer
  *
  *Return: size_t
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
