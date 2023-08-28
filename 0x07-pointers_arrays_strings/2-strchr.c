#include "main.h"
/**
 *_strchr - Returns a pointer to the first occurrence
 *of the character c in the string s
 *
 *@s: pointer to char
 *@c: character
 *
 *Return: return pointer to ch
*/
char *_strchr(char *s, char c)
{
int i, flag;

i = 0;
flag = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
flag = 1;
break;
}
i++;
}
if (flag == 0)
return ('\0');
return (s + i);
}
