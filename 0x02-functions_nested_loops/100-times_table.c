#include "main.h"
/**
 *print_times_table - that prints the n times table
 *
 *@n: the number
 *
 *Return: nothing
*/
void print_times_table(int n)
{
int i, j;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0 ; j <= n ; j++)
{
if (((i * j) == 0) && (j == 0))
{
_putchar('0' + (i * j));
}
if (((i * j) <= 9) && (j != 0))
{
_putchar(' ');
_putchar(' ');
_putchar('0' + (i * j));
}
if ((i * j) > 9 && (i * j) <= 99)
{
_putchar(' ');
_putchar('0' + (i * j) / 10);
_putchar('0' + (i * j) % 10);
}
if ((i * j) > 99 && (i * j) <= 225)
{
_putchar('0' + (i * j) / 100);
_putchar('0' + ((i * j) % 100) / 10);
_putchar('0' + (i * j) % 10);
}
if (j == n)
{
break;
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
}
