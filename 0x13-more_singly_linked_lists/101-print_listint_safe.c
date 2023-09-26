#include "lists.h"
/**
 *print_listint_safe -  prints a listint_t linked list.
 *
 *@head: pointer to header
 *
 *Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow_p = head;
const listint_t *fast_p = head;
size_t counter = 0;

if (head == NULL)
exit(98);

while(slow_p && fast_p && fast_p->next)
{
printf("[%p] %d\n", (void *)slow_p,slow_p->n);
slow_p = slow_p->next;
fast_p = fast_p->next->next;
counter++;
if (slow_p == fast_p)
{
printf("-> [%p] %d\n", (void *)slow_p,slow_p->n);
break;
}
}
return (counter);
}
