#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - that allocates memory using malloc
 *
 *@b: unsigned integer number
 *
 *Return: pointer to memory allocated
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
