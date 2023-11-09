#include "lists.h"
/**
 *dlistint_len - return length of list
 *
 *@h: pointer to list header
 *
 *Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t counter = 0;
if (h == NULL)
return (0);

while (temp)
{
temp = temp->next;
counter++;
}
return (counter);
}
