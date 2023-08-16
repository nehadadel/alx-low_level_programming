#include "main.h"
/**
 *times_table - prints time_table
 *
 *Return: nothing
*/
void times_table(void)
{
int i;

int j;

int result;

for (i = 0; i <= 9; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
result = i * j;
 if ((result == 0) && (j == 0))
{
_putchar('0' + result);
}
if ((result <= 9) && (j != 0))
{
_putchar(' ');
_putchar('0' + result);
}
if (result > 9)
{
_putchar('0' + result / 10);
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
