#include "main.h"
/**
 *rev_string - revese string
 *
 *@s: pointer to charcter
 *
 *Return: Nothing
*/
void rev_string(char *s)
{
char *temp;
int i, index;

index = 0;
while (s[index] != '\0')
{
temp [index] = s[index];
index++;
}

for (i = 0; i < index; i++)
{
s[i] = temp[i];
}
}
