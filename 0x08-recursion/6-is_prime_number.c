#include "main.h"
/**
 *is_prime_number -  returns 1 if the input integer is a prime number
 *otherwise return 0.
 *
 *@n : integer number
 *
 *Return: returns 1 if the input integer is a prime number
 *otherwise return 0.
*/
int is_prime_number(int n)
{
if (n == 2 || n == 4 || n == 5)
return (1);
 if ((((n * n) - 1) % 24) == 0)
return (1);
return (0);
}
