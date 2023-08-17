#include <stdio.h>
/**
 *main - task
 *
 *Return: (0)
*/
int main(void)
{
long int first, second, next;
int count;

first = 1;
second = 2;
next = first + second;
printf("%lu, ", first);
printf("%lu, ", second);
for (count = 3; count <= 50; count++)
{
if(next <= 4000000 && next % 2 == 0)
{
if (count == 50)
{
printf("%lu\n", next);
}
else
{
printf("%lu, ", next);
}
}
first = second;
second = next;
next = first + second;
}
return (0);
}
