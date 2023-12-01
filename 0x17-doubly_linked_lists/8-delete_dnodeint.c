#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index index of linked list
 *
 *@head: pointer to pointer to head
 *@index: index to the node
 *
 *Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int len = 0;
dlistint_t *temp = *head;
dlistint_t *deleted_node;

if (*head == NULL)
return (-1);

if (index == 0)
{
temp = (*head)->next;
if (temp->next != NULL)
temp->prev = NULL;
free(*head);
*head = temp;
return (1);
}
while (temp != NULL)
{
if (index - 1 == len)
{
deleted_node = temp->next;
temp->next = deleted_node->next;
if (temp->next != NULL)
deleted_node->next->prev = temp;
free(deleted_node);
return (1);
}

temp = temp->next;
len++;
}
return (-1);
}
