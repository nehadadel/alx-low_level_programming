#include "main.h"
/**
 *_isupper - checks for uppercase character.
 *
 *@c: the character integer type
 *
 *Return: (1) if c is uppercase
 *(0) otherwise
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
/**
 *_isdigit -  checks for a digit (0 through 9).
 *
 *@c : integer type
 *
 *Return: (1) if it is digit
 *(0) otherwise
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
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
/**
 *_puts -  prints a string, followed by a new line
 *
 *@str: pointer to character
 *
 *Return: Nothing
*/
void _puts(char *str)
{
int index;

index = 0;
while (str[index] != '\0')
{
_putchar(str[index]);
index++;
}
_putchar('\n');
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int length, index;

length = 0;

while (src[length] != '\0')
{
length++;
}

for (index = 0; index < length; index++)
{
dest[index] = src[index];
}
dest[index] = '\0';

return (dest);
}
