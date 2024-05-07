#include "search_algos.h"
/**
*linear_search -  function that searches for a value in an array of integers
*using the Linear search algorithm
*
*@array: is a pointer to the first element of the array to search in
*@size: number of elements in array
*@value: the value to search for
*
*Return:  the first index where value is located
*If value is not present in array or if array is NULL
*your function must return -1
*/
int linear_search(int *array, size_t size, int value){
size_t i = 0;

if (array == NULL)
{
printf("Found %d at index: %d\n", value, -1);
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
printf("Found %d at index: %ld\n", value, i);
return (i);
}
}
if (i == size)
printf("Found %d at index: %d\n", value, -1);
return (-1);
}