#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *
 *@x : integer number
 *@y : integer number
 *
 *Return: return (-1) if y < 0
 *return (1) if y = 0
 *return the value of power if x && y > 0
 *return 0 if x = 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
if (x == 0)
return (0);

return (x * _pow_recursion(x , y - 1));
}
