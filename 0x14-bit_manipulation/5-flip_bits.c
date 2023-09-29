#include "main.h"
/**
 *flip_bits -  returns the number of bits you would need
 *to flip to get from one number to another
 *
 *@n: long number
 *@m: long number
 *
 *Return:  the number of bits you would need
 *to flip to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num;
unsigned int bits = 0;

num = n ^ m;
while (num > 0)
{
bits += num & 0x01;
num = num >> 0x01;
}
return (bits);
}
