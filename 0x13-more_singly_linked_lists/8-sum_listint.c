#include <stdlib.h>
#include "lists.h"

/**
  *sum_listint - prints sum of elements in a list
  *@head: head pointer
  *
  *Return: sum of elements
  */
int sum_listint(listint_t *head)
{
	int i = 0;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		i++;
		head = head->next;
	}
	return (sum);
}
