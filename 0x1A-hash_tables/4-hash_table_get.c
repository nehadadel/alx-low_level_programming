#include "hash_tables.h"
/**
 *hash_table_get -  retrieves a value associated with a key.
 *
 *@ht: hash table you want to look into
 *@key: is the key you are looking for
 *
 *Return: the value associated with the element
 *or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
unsigned long int index;
if (strcmp(key, "") == 0 || ht == NULL || key == NULL)
return (NULL);

index = key_index((unsigned char *)key, ht->size);
tmp = ht->array[index];
if (ht->array[index] == NULL)
return (NULL);

while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp->next = tmp;
}
return (NULL);
}
