#include "main.h"
#include <stdio.h>
/**
 *print_diagsums -  prints the sum of the two diagonals
 *of a square matrix of integers
 *
 *@a: pointer to int
 *@size: int
*/
void print_diagsums(int *a, int size)
{
int i, sum;

sum = 0;
for (i = 0; i < size; i++)
sum = sum + a[i][i];
printf("%d", sum);
}
