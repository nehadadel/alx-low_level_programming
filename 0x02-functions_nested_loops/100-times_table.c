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
int i, result, j;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0 ; j <= n ; j++)
{
result = i * j;
if ((result == 0) && (j == 0))
{
_putchar('0' + result);
}
if ((result <= 9) && (j != 0))
{
_putchar(' ');
_putchar(' ');
_putchar('0' + result);
}
if (result > 9 && result <= 99)
{
_putchar(' ');
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
if (result > 99 && result <= 225)
{
_putchar('0' + result / 100);
_putchar('0' + (result % 100) / 10);
_putchar('0' + result % 10);
}
if (j == 9)
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
