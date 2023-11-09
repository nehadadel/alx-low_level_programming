#include "lists.h"
/**
 *print_dlistint - prints all the elements of a list
 *
 *@h: pointer to head of linked list
 *
 *Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t counter = 0;
if (h == NULL)
return (0);

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
counter++;
}
return (counter);
}
