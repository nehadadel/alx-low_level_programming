#include "main.h"
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
int i, length;

i = 0;
while (*(dest + i) != '\0')
{
i++;
}
length = i;
for (i = 0; *(src + i) != '\0'; i++)
{
*(dest + length + i) = *(scr + i);
}
*(dest + length + i) = '\0';
return (dest);
}
