#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints single numbers
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
putchar('0' + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
