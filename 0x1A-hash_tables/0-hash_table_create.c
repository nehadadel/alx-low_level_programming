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
hash_table_t *hash_table;
hash_table = malloc(sizeof(hash_table_t) * size);
if (hash_table == NULL)
return (NULL);

return (hash_table);
}
