#include "main.h"
/***/
void _puts_recursion(char *s)
{
_putchar(*s);
if(*s != '\0')
{
s = s + 1;
_puts_recursion(s);
}
}
