#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *string_nconcat -  that concatenates two strings.
 *
 *@s1: pointer to char
 *@s2: pointer to char
 *@n: unsigned int
 *
 *Return: pointer to char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *ptr;

len1 = strlen(s1);
len2 = strlen(s2);
if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}
if (n >= len2)
{
n = len2;
}
ptr = (char *)malloc(sizeof(char) * (len1 + n + 1));
if (ptr == NULL)
return (NULL);

strcpy(ptr, s1);
strncat(ptr, s2, n);

return (ptr);
}
