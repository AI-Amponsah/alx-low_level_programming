#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - adds a node at the start of a linked list
  *@head: head node
  *@n: data part of node
  *Return: pointer no next node in list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}

