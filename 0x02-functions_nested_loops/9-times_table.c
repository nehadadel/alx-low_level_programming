#include "main.h"
/***/
void times_table(void)
{
int i;

int j;

int result;

for (i =0; i <= 9; i++)
{
for (j =0 ; j <= 9 ; j++)
{
result = i * j;
if (result <= 9)
{
_putchar('0' + result);
}
if (result > 9)
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
_putchar(',');
_putchar(' ');
}
}
}
