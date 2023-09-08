#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_realloc - reallocates a memory block using malloc and free
 *
 *@ptr: void pointer
 *@old_size: unsigned int
 *@new_size: unsigned int
 *
 *Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < new_size && i < old_size; i++)
new_ptr[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}
