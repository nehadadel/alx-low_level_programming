#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int i;

int j;

int k;

for (k = 0 ; k < 8 ; k++)
{
for (j = k + 1 ; j < 9 ; j++)
{
for (i = j + 1 ; i <= 9 ; i++)
{
putchar('0' + k);
putchar('0' + j);
putchar('0' + i);
if ((j == 8) && (i == 9) && (k == 7))
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
