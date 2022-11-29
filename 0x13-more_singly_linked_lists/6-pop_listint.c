#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - deleted head node
  *@head: head node
  *
  *Return: head data
  */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int ptr;

	if (temp == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (ptr);
}
