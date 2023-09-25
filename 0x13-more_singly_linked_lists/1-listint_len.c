#include "lists.h"
/**
 *listint_len - prints all the elements of a list
 *
 *@h: pointer to head of linked list
 *
 *Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
const listint_t *temp = h;
size_t len = 0;

if (h == NULL)
return (0);

while (temp)
{
temp = temp->next;
len++;
} 
  
return (len);
}
