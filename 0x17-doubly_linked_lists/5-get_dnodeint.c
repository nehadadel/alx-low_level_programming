#include "lists.h"
/**
 *get_dnodeint_at_index -  returns the nth node of a listint_t linked list.
 *
 *@head: pointer to head
 *@index: index number of node
 *
 *Return:  returns the nth node of a listint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int len = 0;
dlistint_t *temp = head;

if (head == NULL)
return (NULL);

while (temp != NULL)
{
if (index == len)
return (temp);

temp = temp->next;
len++;
}
return (NULL);
}
