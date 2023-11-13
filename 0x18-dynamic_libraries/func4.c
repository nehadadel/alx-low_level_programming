#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 *
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{

while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
{
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 - *s2);
}
/**
 *_memset - function fills the first n bytes of the memory area
 *
 *@s : pointer to ch
 *@b : char
 *@n : unsigned int
 *
 *Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n ; i++)
{
s[i] = b;
}
return (s);
}
/**
 *_memcpy - function copies n bytes from memory area src to memory area dest
 *
 *@dest : pointer to char
 *@src : pointer to char
 *@n : unsigned char
 *
 *Return: return pointer to char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
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
if (*s == '\0')
return (s);
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
if (c == '\0')
return (s);
return (s + i);
}
/**
 *_strspn - Returns the number of bytes in the initial segment of
 *s which consist only of bytes from accept
 *
 *@s :pointer to char
 *@accept :pointer to char
 *
 *Return: number of length segement
*/
unsigned int _strspn(char *s, char *accept)
{
int j = 0, i = 0;
unsigned int a = 0;

while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
a++;
j++;
}
i++;
j = 0;
}
return (a);
}
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
/**
 *_strstr -  function finds the first occurrence of the substring needle
 *in the string haystack.
 *The terminating null bytes (\0) are not compared
 *
 *@haystack : pointer to char
 *@needle : pointer to char
 *
 *Return: pointer to char
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, a;


i = 0;
j = 0;

while (*(needle + i) != '\0')
{
while (*(haystack + j) != '\0')
{
if ((*(needle) == *(haystack + j))&&(i == 0))
{
a = j;
j++;
break;
}
else
return (0);
if (*(needle + i) == *(haystack + j))
{
j++;
break;
}
else
return (0);
}
i++;
}
return (haystack + a);
}
