#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints all possible different comb of two digits
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int i;

int j;

for (j = 0 ; j < 9 ; j++)
{
for (i = j+1 ; i <= 9 ; i++)
{
putchar('0' + j);
putchar('0' + i);
if ((j != 8) && (i != 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
