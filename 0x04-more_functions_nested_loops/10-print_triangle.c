#include "main.h"
/**
 *print_triangle - prints a triangle.
 *
 *@size: integer number
 *
 *Return: Nothing
*/
void print_triangle(int size)
{
if (size > 0)
{
int i, j, k;

for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
_putchar('#');
}
if (i == size)
{
continue;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
