#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line.
 *
 *@s : pointer to char
*/
void _puts_recursion(char *s)
{
_putchar(*s);
if (*s != '\0')
{
s = s + 1;
_puts_recursion(s);
}
else
_putchar('\n');
}
