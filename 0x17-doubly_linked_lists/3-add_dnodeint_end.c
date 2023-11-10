#include "lists.h"

/**
 * add_dnodeint_end- Adds a new node at the end of a list
 *
 *@head: pointer to the head of the list
 *@n: integer to be added to the list
 *
 *Return:  the address of the new element, or NULL if it failed
*/
listint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp  = *head;

new_node = malloc(sizeof(dlistint_t));
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
new_node->prev = temp
}
else
{
*head = new_node;
new_node->prev = NULL;
}
return (new_node);
}
