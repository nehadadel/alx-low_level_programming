#include "main.h"
/**
 *mul_by_2 - get the multiple of 2
 *
 *@i: power number
 *
 *Return: the result
*/
unsigned int mul_by_2(unsigned int i)
{

if (i == 0)
return (1);

return (2 * (mul_by_2(i - 1)));
}
/**
 *binary_to_uint -  converts a binary number to an unsigned int.
 *
 *@b: the binary number
 *
 *Return:the converted number, or 0 if
 *here is one or more chars in the string b that is not 0 or 1
 *b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int num, i, len;
if (b == NULL)
return (0);

num = 0;
len = 0;
while (b[len] != '\0')
len++;

for (i = 0; i < len ; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
else if (b[i] == '0')
num += 0;
else if (b[i] == '1')
num += (mul_by_2(len - i - 1));
}

return (num);
}
