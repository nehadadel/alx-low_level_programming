#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print numbers to 98
 *
 *@n: integer number
 *
 *Return: nothing
*/
void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", n);
}
if (n < 98)
{
int i;

for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("%d\n", i);
}
if (n > 98)
{
int i;

for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("%d\n", i);
}
}
