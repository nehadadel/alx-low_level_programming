#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *
 *@head: pointer to head
 *
 *Return: returns the head node’s data (n) and if list is empty return 0
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (*head == NULL)
return (0);

n = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (n);

}
