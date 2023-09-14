#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - that prints numbers, followed by a new line.
 *
 *@separator: char to pointer
 *@n: unsigned int
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *s;

va_start(args, n);
for (i = 0; i < n; i++)
{
s = va_arg(args, char *);
if (separator == NULL || i == n - 1)
printf("%s", s == NULL ? "(nil)" : s);
else
printf("%s%s", s == NULL ? "(nil)" : s, separator);
}
printf("\n");
va_end(args);
}
