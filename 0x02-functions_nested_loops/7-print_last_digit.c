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

int j;

j = i;
if (j < 0)
{
j = -1 * j;
}
last_digit = j % 10;
_putchar(last_digit + '%c');
return (last_digit);
}
