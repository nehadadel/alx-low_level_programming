#include "hash_tables.h"
/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
free(node->key);
free(node->value);
free(node);
}
/**
*hash_table_set - that adds an element to the hash table
*
*@ht: hash table
*@key: the key of table
*@value: which is added to hash table
*
*Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *tmp;
unsigned long int index;
char *dup_value, *dup_key;

if (ht == NULL || key == NULL || strcmp(key, "") == 0)
return (0);
new_node = malloc(sizeof(hash_node_t *));
if (new_node == NULL)
return (0);
dup_key = strdup(key);
if (dup_key == NULL)
{
free_node(new_node);
return (0); }
if (value != NULL)
{
dup_value = strdup(value);
if (dup_value == NULL)
{
free_node(new_node);
return (0); } }
else
dup_value = NULL;
new_node->key = dup_key;
new_node->value = dup_value;
index = key_index((unsigned char *)dup_key, ht->size);
if (ht->array[index] != NULL)
{
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, dup_key) == 0)
{
tmp->value = dup_value;
free_node(new_node);
return (1); }
tmp = tmp->next; } }
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1); }
