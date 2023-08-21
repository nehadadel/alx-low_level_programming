#include "main.h"
/**
 *swap_int -  swaps the values of two integers.
 *
 *@a: pointer to an int as parameter
 *@b: pointer to an int as parameter
 *
 *Return: Nothing
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;

}
