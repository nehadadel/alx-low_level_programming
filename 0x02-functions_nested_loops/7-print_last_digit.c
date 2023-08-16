#include "main.h"
/**
 *print_last_digit - that prints the last digit of a number.
 *
 *@i : integer number
 *
 *Return: the last digit of number
*/
int print_last_digit(int i)
{
int last_digit;

if (i < 0)
{
i = -1 * i;
}
last_digit = i % 10;
_putchar(last_digit + '0');
return (last_digit);
}
