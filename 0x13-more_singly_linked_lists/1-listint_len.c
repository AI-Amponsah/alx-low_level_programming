#include <stdio.h>
#include "lists.h"

/**
  *listint_len - prints list in a linked list
  *@h: head pointer
  *
  *Return: size_t
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;


	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
