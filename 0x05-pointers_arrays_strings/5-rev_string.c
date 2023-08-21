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
char temp;
int i, index;

index = 0;
while (s[index] != '\0')
{
index++;
}

for (i = 0; i < index / 2; i++)
{
temp = s[i];
s[i] = s[index - i - 1];
s[index - i - 1] = temp;
}
}
