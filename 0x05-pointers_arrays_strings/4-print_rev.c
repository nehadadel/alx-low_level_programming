#include "main.h"
/**
 *print_rev -  prints a string, in reverse
 *
 *@s: string to character
 *
 *Return: Nothing
*/
void print_rev(char *s)
{
int index;

index = 0;
while (s[index] != '\0')
{
index++;
}
index--;
while (index >= 0)
{
_putchar(s[index]);
index--;
}
}
