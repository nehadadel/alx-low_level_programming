#include "lists.h"
/**
 *get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 *
 *@head: pointer to head
 *@index: index number of node
 *
 *Return:  returns the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int len = 0;
listint_t *temp = head;

if(head == NULL)
return (NULL);

while (temp->next != NULL)
{
if (index == len)
return (temp);

temp = temp->next;
len++;
}
return (NULL);
}
