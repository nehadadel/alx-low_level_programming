#include "main.h"
/**
 *print_list -  prints all the elements of a list_t list
 *
 *@h: constant header list
 *
 *Return: return size_t type
*/
size_t print_list(const list_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] (nil)\n", h->len);
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
node_count++;
}
return (node_count);
}
