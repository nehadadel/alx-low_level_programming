#include <stdio.h>
int main(void)
{
int i;

int j;

for (j = 0 ; j < 9 ; j++)
{
for (i = j ; i <= 9 ; i++)
{
putchar('0' + j);
putchar('0' + i);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
