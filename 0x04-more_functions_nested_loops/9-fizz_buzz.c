#include <stdio.h>
/**
 *main - prints number from 0-100
 *
 *Return: (0)
*/
int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i == 100)
{
continue;
}
putchar(' ');
}
return (0);
}
