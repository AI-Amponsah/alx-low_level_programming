#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*list_len - prints elements in a list
*@h: pointer to struct
* Return: size_t
*/

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
if (h != NULL)
i++;
h = h->next;
}
return (i);
}
