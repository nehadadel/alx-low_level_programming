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

if (last_digit < 0)
{
last_digit = -1 * last_digit;
}
last_digit = i % 10;
_putchar('0' + last_digit);
return (last_digit);
}
