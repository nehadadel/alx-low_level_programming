#include  "main.h"
/**
 *infinite_add - add two numbers
 *
 *@n1: pointer to char number 1
 *@n2: pointer to char number 2
 *@r: result pointer
 *@size_r: integer number
 *
 *Return: pointer of ch
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int flag, biggest, length1, length2;

flag = 0;
length1 = 0;
length2 = 0;
while (*(n1 + length1) != '\n')
length1++;
while (*(n2 + length2) != '\n')
length2++;
if (size_r <=  length1 + 1 || size_r <= length2 + 1)
return (0);
if (length1 >= length2)
biggest = length1;
else
biggest = length2;
r[biggest + 1] = '\0';
while (biggest >= 0)
{
r[biggest] = n1[length1] + n2[length2] + flag;
if (r[biggest] > 9)
{
r[biggest] = r[biggest] % 10;
flag = 1;
}
else
flag = 0;
length1--;
length2--;
biggest--;
}
return (r + 1);
}
