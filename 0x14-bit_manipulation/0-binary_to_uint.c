#include "main.h"
/***/
unsigned int mul_by_2(unsigned int i)
{

if (i == 0)
return (1);

return (2 * (mul_by_2(i - 1)));
}
/***/

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
