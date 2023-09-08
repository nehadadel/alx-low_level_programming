#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
  unsigned int i;
  void *arr;
  
  if (nmemb == 0 || size == 0)
  return (NULL);
  arr = (void *)malloc(size * nmemb);
  if (arr == NULL)
    return (NULL);
  for (i= 0; i < nmemb; i++)
    arr[i] = 0;
  return (arr);
}
