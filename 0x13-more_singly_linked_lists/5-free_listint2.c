#include "lists.h"

/**
 *free_listint2 - Frees a list
 *
 *@head: A pointer to the list head
 *
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
