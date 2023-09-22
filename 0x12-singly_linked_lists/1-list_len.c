#include "lists.h"

/**
*list_len - prints all the elements of a list
*
*@h:pointer to the list
*
*Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
const list_t *temp = h;
size_t count = 0;

while (temp != NULL)
{
temp = temp->next;
count++;
}

return (count);
}
