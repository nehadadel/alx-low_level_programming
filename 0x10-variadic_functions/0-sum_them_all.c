#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - that returns the sum of all its parameters.
 *
 *@n: unsigned int
 *
 *Return: sum of args
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list args;

if (n == 0)
return (0);
sum = 0;
va_start(args, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
