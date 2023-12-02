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
