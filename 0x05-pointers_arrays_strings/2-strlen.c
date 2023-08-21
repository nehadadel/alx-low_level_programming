#include "main.h"
/**
 *_strlen -  returns the length of a string.
 *
 *@s: pointer to charcter
 *
 *Return: value of string length
*/
int _strlen(char *s)
{
int index;

index = 0;
while (s[index] != '\0')
{
index++;
}
return (index);
}
