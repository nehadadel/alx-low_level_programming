#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - that searches for an integer.
 *
 *@array: pointer to int
 *@size: size of array
 *@cmp: pointer to function
 *
 *Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if (array != NULL && cmp != NULL)
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (array[i]);

if (i == size)
return (-1);

return (0);
}
