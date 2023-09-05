#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings.
 *
 *@s1: char to pointer
 *@s2: char to pointer
 *
 *Return: char to pointer
*/
char *str_concat(char *s1, char *s2)
{
int size, length_s1, length_s2,i;
char *s;

length_s1 = 0;
length_s2 = 0;
if (*s1 == '\0')
s1 = "";
if (*s2 == '\0')
s2 = "";
while (*(s1 + length_s1) != '\0')
length_s1++;
while (*(s2 + length_s2) != '\0')
length_s2++;
size = length_s1 + length_s2;
s = (char *)malloc(sizeof(char) * size); 
if (s == NULL)
return (NULL);
for (i = 0; s[i] != '\0' ; i++)
{
if (i < length_s1)
s[i] = s1[i];
else
s[i] = s2[i - length_s1];
}
s[i] = '\0';
return (s);
}
