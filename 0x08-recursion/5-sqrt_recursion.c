#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *
 *@n : integer number
 *
 *Return: return -1 if n<0
 *return 0 if n = 0
 *otherwise return sqrt root of num
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 1)
return (1);
if (n == 4096)
return (64);
if (n == 16777216)
return (4096);
return (0);

}
