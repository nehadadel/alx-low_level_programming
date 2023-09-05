#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid -  frees a 2 dimensional grid previously created by 
 *alloc_grid function.
 *
 *@grid: 2d arry
 *@height: integer number
*/
void free_grid(int **grid, int height)
{
  int i, j, width;
width = 0;
 while (grid[0])
   width++;
for (i = 0; i < height ; i++)
for (j = 0; j < width; j++)
free grid[i][j];
}
