#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/
list_t *add_node_end(list_t **head, const char *str)
{
char *s;
int len;
list_t *new, *last;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

s = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}

len = 0;
while (str[len])
len++;

new->str = s;
new->len = len;
new->next = NULL;

if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
