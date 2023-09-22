#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
char *s;
int len;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

s = strdup(str);
if (s == NULL)
{
free(new);
return (NULL);
}
len = 0;
while (str[len])
len++;

new->str = s;
new->len = len;
new->next = *head;

*head = new;

return (new);

}
