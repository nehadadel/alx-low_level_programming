#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int main()
{
int i;

for (i = 0; i <= 15; i++)
{
putchar('0' + i / 10);
putchar('a' + i % 10);
}
putchar('\n');
return (0);
}
