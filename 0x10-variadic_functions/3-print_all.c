#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - that prints anything.
 *
 *@format: list of types of arguments passed to the function
 *
*/
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
char *s;
const char *format_ptr;
 
format_ptr = format;
while(*format)
{
switch (*format)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *); 
printf("%s", s == NULL ? "(nil)" : s);
break;
}
format_ptr++;
}
printf("\n");
va_end(args);
}
