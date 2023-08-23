#include "main.h"
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
*(dest + index) = *(scr + index);
return (dest);
}
