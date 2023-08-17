#include <stdio.h>
/**
 *main - task
 *
 *Return: (0)
*/
int main(void)
{
long int first, second, next, even;
int count;

first = 1;
second = 2;
next = first + second;
even = 2;
for (count = 3; count <= 50; count++)
{
if (next <= 4000000 && next % 2 == 0)
{
even = even + next;
}
first = second;
second = next;
next = first + second;
}
printf("%lu\n", even);
return (0);
}
