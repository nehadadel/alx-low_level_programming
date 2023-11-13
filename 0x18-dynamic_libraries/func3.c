#include "main.h"
/**
 * _atoi - convert a string to an integer.
 *
 *@s : pointer to char
 *
 *Return: integer
*/
int _atoi(char *s)
{
return (0);
}
/**
 * _strcat - concatenates 2 strings.
 *
 * @dest: string with concatenation
 * @src: string to be concatenated
 *
 * Return: pointer to ch.
 */
char *_strcat(char *dest, char *src)
{
int lengthD, lengthS;

lengthD = 0;
lengthS = 0;

while (*(dest + lengthD) != '\0')
lengthD++;

while (*(src + lengthS) != '\0' && lengthD < 97)
{
*(dest + lengthD) = *(src + lengthS);
lengthD++;
lengthS++;
}
*(dest + lengthD) = '\0';
return (dest);
}
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int lengthD, lengthS;

lengthD = 0;
lengthS = 0;

while (*(dest + lengthD) != '\0')
lengthD++;

while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
{
*(dest + lengthD) = *(src + lengthS);
lengthD++;
lengthS++;
}
*(dest + lengthD) = '\0';
return (dest);
}
/**
 * _strncpy - concatenates 2 strings.
 *
 *@dest: string with concatenation
 *@src: string to be concatenated
 *@n: integer number
 *
 * Return: pointer to ch.
 */
char *_strncpy(char *dest, char *src, int n)
{
int index;

for (index = 0; *(src + index) != '\0' && index < n; index++)
{
*(dest + index) = *(src + index);
}
for ( ; index < n; index++)
*(dest + index) = '\0';
return (dest);
}
