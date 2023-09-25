#include "lists.h"

/**
 * add_nodeint_end- Adds a new node at the end of a list
 *
 *@head: pointer to the head of the list
 *@n: integer to be added to the list
 *
 *Return:  the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp  = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->next = NULL;
new_node->n = n;

if (*head != NULL)
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
else
*head = new_node;
return (new_node);
}
