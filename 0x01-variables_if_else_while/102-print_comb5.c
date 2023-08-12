#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints whether the number is positive or negative.
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int i;

int j;

int k;

int m;
for (m = 0 ; m < 8 ; m++)
{
for (k = 0 ; k < 8 ; k++)
{
for (j = k + 1 ; j < 9 ; j++)
{
for (i = j + 1 ; i <= 9 ; i++)
{
putchar('0' + m);
putchar('0' + k);
putchar(' ');
putchar('0' + j);
putchar('0' + i);
if ((m == 9) && (j == 8) && (i == 9) && (k == 9))
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
