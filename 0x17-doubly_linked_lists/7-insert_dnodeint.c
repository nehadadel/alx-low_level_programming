#include "lists.h"
/**
 *insert_dnodeint_at_index-   inserts a new node at a given position.
 *
 *@head: pointer to pointer to head
 *@idx: index number of node
 *@n: integer element of node
 *
 *Return:  returns the insert node of a listint_t linked list.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
unsigned int len = 0;
dlistint_t *temp = *head;
dlistint_t *temp2;
dlistint_t *insert_node;

if (*head == NULL)
return (NULL);

insert_node = malloc(sizeof(dlistint_t));
if (insert_node == NULL)
return (NULL);

insert_node->n = n;
if (idx == 0)
{
insert_node->next = *head;
(*head)->prev = insert_node;
*head = insert_node;
return (insert_node);
}
while (temp != NULL)
{
if (idx - 1 == len)
{

temp2 = temp->next;
temp->next = insert_node;
insert_node->prev = temp;
insert_node->next = temp2;
temp2->prev = insert_node;
return (insert_node);
}

temp = temp->next;
len++;
}
free(insert_node);
return (NULL);
}
