#include "hash_tables.h"
/**
  *hash_table_print - prints a hash table
  *@ht: hash table
  *@
  *@
  *Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i = 0, j = 0;

if (ht != NULL)
{
printf("{");
for (i = 0; j < ht->size; j++)
{
node = ht->array[j];
while (node != NULL)
{
if (i != 0)
printf(", ");
i = 1;
printf("'%s' : '%s'", node->key, node->value);
node = node->next;
}
}
printf("}\n");
}

}
