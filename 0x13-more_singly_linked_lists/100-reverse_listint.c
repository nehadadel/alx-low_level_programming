#include "lists.h"
/**
 *reverse_listint - reverses a listint_t linked list.
 *
 *@head: headr pointer
 *
 *Return: return reverse listint
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *current = *head;
listint_t *prev = NULL;

if (*head == NULL)
return (NULL);

while (*head != NULL)
{
current = (*head)->next;
(*head)->next = prev;
prev = *head;
(*head) = current;
}
*head = prev;
return (*head);
}
