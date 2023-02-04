#include "hash_tables.h"
/**
  *key_index - gives the index of a key
  *@key: key
  *@size: size of table
  *Return: key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

index = hash_djb2(key);
index = index % size;
return (index);
}
