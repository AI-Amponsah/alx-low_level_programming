#include "hash_tables.h"

/**
  *hash_table_create - creates a hash table
  *@size: depiects size of the hash table
  *
  *Return: pointer to the size of hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
long unsigned int i;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->array = malloc(sizeof(hash_node_t *) * size);

if (table->array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);

}
