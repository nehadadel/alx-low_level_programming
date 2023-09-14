#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - that prints numbers, followed by a new line.
 *
 *@separator: char to pointer
 *@n: unsigned int
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
if (separator != NULL)
printf("%d%s", va_arg(args, int), separator);
else
printf("%d", va_arg(args, int));   
}
printf("\n");
va_end(args);
}
