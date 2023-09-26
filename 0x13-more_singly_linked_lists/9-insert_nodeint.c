#include "lists.h"
/**
 *insert_nodeint_at_index-   inserts a new node at a given position.
 *
 *@head: pointer to pointer to head
 *@idx: index number of node
 *@n: integer element of node
 *
 *Return:  returns the insert node of a listint_t linked list.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int len = 0;
listint_t *temp = *head;
listint_t *temp2;
listint_t * insert_node;

if (*head == NULL)
return (NULL);

insert_node = malloc(sizeof(listint_t));
if (insert_node == NULL)
return (NULL);

insert_node->n = n;

while (temp != NULL)
{
if (idx == len)
{
temp2 = temp->next;
temp->next = insert_node;
insert_node->next = temp2;
}

temp = temp->next;
len++;
}
return (NULL);
}
