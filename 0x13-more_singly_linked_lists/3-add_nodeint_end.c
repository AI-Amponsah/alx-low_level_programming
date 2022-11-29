#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint_end - adds node to end of list
  *@head: head node
  *@n: node data
  *Return: pointer to next node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (new == NULL)
	{
		return (NULL);
	}
	else if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}

