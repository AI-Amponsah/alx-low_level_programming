#include "hash_tables.h"
/**
  *hash_table_get - getting value from a hast_table
  *@ht: hash table
  *@key: key
  *@
  *Return: value
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index, size;

if (ht == NULL || key == NULL)
return (0);
size = ht->size;

index = key_index((const unsigned char *) key, size);

if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
return (ht->array[index]->value);
}
return (NULL);
}
