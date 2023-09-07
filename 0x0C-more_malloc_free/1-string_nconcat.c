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
unsigned int len1, len2, len3, i;
char *ptr;


if (strlen(s1) == 0)
{
s1 = "";
}

if (strlen(s2) == 0)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
len3 = len2;
else
len3 = n;

ptr = (char *)malloc(sizeof(char) * (len1 + len3 + 1));
if (ptr == NULL)
return (NULL);

for (i = 0; i < (len1 + len3 + 1); i++)
{
if (i < len1)
*(ptr + i) = *(s1 + i);
else
*(ptr + i) = *(s2 + i - len1);
}
*(ptr + i) = '\0';
return (ptr);
}
