#include "search_algos.h"
/**
*binary_search -  that searches for a value in a sorted array of integers
*using the Binary search algorithm
*
*@array: is a pointer to the first element of the array to search in
*@size: the number of elements in array
*@value: is the value to search for
*
*Return: the index where value is located
*If value is not present in array or if array is NULL
*your function must return -1
*/
int binary_search(int *array, size_t size, int value)
{
int low, high, i, mid;

if (array == NULL)
return (-1);

low = 0;
high = size - 1;

while (low <= high)
{
printf("Searching in array:");
for (i = low; i < high ; i++)
printf(" %d,", array[i]);
printf(" %d\n", array[high]);

mid = low + (high - low) / 2;
if (array[mid] == value)
return (mid);
else if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}
return (-1);
}
