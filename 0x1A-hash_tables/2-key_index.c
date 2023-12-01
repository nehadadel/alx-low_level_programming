#include "hash_tables.h"
/**
 *key_index - gives the index of hash table
 *
 *@key: Key to be indexed
 *@size: Size of the hash table.
 *
 *Return: Integer after the operations.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;
index = hash_djb2(key) % size;
return (index);
}
