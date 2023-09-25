#include "lists.h"
/**
 *add_nodeint - pointer to new_node
 *
 *@head: pointer to head of linked list
 *@n: date element
 *
 *Return: pointer to new_node
*/
listint_t *add_nodeint(listint_t **head, const int n);
{
const listint_t temp = head;
listint_t *new_node;

new_node = (listint_t) malloc(sizeof(listint_t *);
if (new_node == NULL)
return (NULL);


temp = temp->next;
head->next = new_node;
new_node->next = temp;
new_node->n = n;

return (new_node);
}
