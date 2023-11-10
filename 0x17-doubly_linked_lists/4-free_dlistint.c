#include "lists.h"

/**
 *free_dlistint - Frees a list
 *
 *@head: A pointer to the list head
 *
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
