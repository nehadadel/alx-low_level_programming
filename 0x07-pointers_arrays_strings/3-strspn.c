#include "main.h"
/**
 *_strspn - Returns the number of bytes in the initial segment of 
 *s which consist only of bytes from accept
 *
 *@s :pointer to char
 *@accept :pointer to char
 *
 *Return: number of length segement
*/
unsigned int _strspn(char *s, char *accept)
{
int j = 0, i = 0;
unsigned int a = 0;

while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
a++;
j++;
}
i++;
j = 0;
}
return (a);
}
