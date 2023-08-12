#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints 4 comb numbers.
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int i;

int j;


for (j = 0 ; j <= 99 ; j++)
{
for (i = j ; i <= 99 ; i++)
{
if (j == i)
{
continue;
}
putchar('0' + j / 10);
putchar('0' + j % 10);
putchar(' ');
putchar('0' + i / 10);
putchar('0' + i % 10);
if (j == 98)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
