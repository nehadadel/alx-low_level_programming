#include "main.h"
/**
 *print_diagonal - diagonal line on the terminal.
 *
 *@n: integer number
 *
 *Return: Nothing
*/
void print_diagonal(int n)
{
if (n > 0)
{
int i, j;

for (i = 1; i <= n; i++)
{
for (j = 2; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
