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

index = _strlen(s) - 1;
while (index >= 0)
{
_putchar(s[index]);
index--;
}
 _putchar('\0');
}
