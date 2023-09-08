#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_calloc - that allocates memory for an array, using malloc
 *
 *@nmemb: unsigned int
 *@size: unsigned int
 *
 *Return: void pointer 
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *arr;

if (nmemb == 0 || size == 0)
return (NULL);
arr = (void *)malloc(size * nmemb);
if (arr == NULL)
return (NULL);
for (i= 0; i < nmemb * size; i++)
*(arr + i) = 0;
return (arr);
}
