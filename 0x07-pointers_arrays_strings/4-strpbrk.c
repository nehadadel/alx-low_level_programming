#include "main.h"
/**
 *_strpbrk - function locates the first occurrence in the string s
 *of any of the bytes in the string accept
 *
 *@s : pointer to char
 *@accept : pointer to char
 *
 *Return: pointer to char
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

i = 0;
j = 0;
while (*(s + i) != '\0')
{
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
return ((s + i));
j++;
}
i++;
j = 0;
}
return ('\0');
}
