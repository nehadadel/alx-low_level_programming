#include "main.h"
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
int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
