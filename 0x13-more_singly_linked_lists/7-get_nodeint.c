#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - gets the nth node
  *@head: head pointer
  *@index: index
  *Return: Pointer to next node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; current; i++)
	{
		if (i == index)
		{
			return (current);
			current = current->next;
		}
	}
	return (NULL);
}
