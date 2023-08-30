#include "main.h"
/**
 *factorial - factorial of n
 *
 *@n : int number
 *
 *Return: factoraial of n if > 0
 *return (1) if n = 0
 *return (-1) if n < 0
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
