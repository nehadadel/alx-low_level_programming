#include "hash_tables.h"
/**
 *hash_table_create - creat hash table
 *
 *@size: size of hash table
 *
 *Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashtable;
unsigned long int i;

if (size == 0)
return (NULL);


hashtable = malloc(sizeof(hash_table_t));
if (hashtable == NULL)
return (NULL);

hashtable->size = size;
hashtable->array = malloc(sizeof(hash_node_t) * size);
if (hashtable->array == NULL)
return (NULL);

for (i = 0; i < size; i++)
hashtable->array[i] = NULL;
return (hashtable);
}
