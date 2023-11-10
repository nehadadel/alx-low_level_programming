#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n) of a listint_t linked list.
 *
 *@head: pointer to head of linked list
 *
 *Return: returns the sum of all the data (n) of a listint_t linked list.
 *if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
int sum = 0;

if (head == NULL)
return (0);

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
