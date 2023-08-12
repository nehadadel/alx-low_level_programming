#include <stdio.h>
/**
 *main - Entry point
 *
 *Description : the program c prints numbers using putchar
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
for (int i = 0; i <= 9; i++) {
putchar('0' + i);
}
putchar('\n');
return 0;
}
