#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *array_iterator - executes a function given as a parameter on each element of an array
 *
 *@array: pointer to int
 *@size: size_t type
 *@action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action != NULL)
for (i = 0; i < size; i++)
action(array[i]);
}
