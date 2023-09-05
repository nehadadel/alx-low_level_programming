#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *
 *@str : pointer to char
 *
 *Return: pointer to char
*/
char *_strdup(char *str)
{
char *s;
int i, j;

if (str == NULL)
return (NULL);

i = 0;
while (*(str + i) != '\0')
i++;

s =(char *)malloc(sizeof(char) * (i + 1));
if (s == NULL)
return (NULL);

for (j = 0; str[j] !='\0' ; j++)
s[j] = str[j];
s[j] = '\0';
return (s);
}
