#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *array_range - that creates an array of integers.
 *
 *@min: integer number
 *@max: integer number
 *
 *Return: pointer to integer
*/
int *array_range(int min, int max)
{
int i;
int *arr;

if (min > max)
return (NULL);

arr = (int *)malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);

for (i = 0; i < (max - min + 1); i++)
arr[i] = min + i;
return (arr);
}
