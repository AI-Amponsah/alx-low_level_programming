#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints elements in struct
*@h: struct pointer
*Return: size_t
*/

size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
}
else
{
printf(" [%u] %s\n", h->len, h->str);
h = h->next;
}
i++;
}
return (i);
}
