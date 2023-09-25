#include "lists.h"
/**
 *print_listint - prints all the elements of a list
 *
 *@h: pointer to head of linked list
 *
 *Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
const listint_t *temp = h;
size_t counter = 0;

if (h == NULL)
return (0);

while (temp)
{
printf("%d\n",temp->n);
temp = temp->next;
counter++;
}
return (counter);
}
