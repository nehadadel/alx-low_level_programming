#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - that returns a pointer to a 2 dimensional array of integers
 *
 *@width: integer number
 *@height: integer number
 *
 *Return: pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
int i, j;
 
if (width <= 0 || height <= 0)
return (NULL);
int** arr = (int**)malloc(width * sizeof(int*));
if (*arr == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
arr[i] = (int*)malloc(height * sizeof(int));
if (arr[i] == NULL)
return (NULL);
}
for (i = 0; i < width; i++)
for (j = 0; j < height; j++)
arr[i][j] = 0;
return (arr);

}
