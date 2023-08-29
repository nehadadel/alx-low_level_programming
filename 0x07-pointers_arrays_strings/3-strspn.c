#include "main.h"
/**
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, index;

i = 0;
index = 0;
while (*(accept + i) == '\0')
{
for (j = 0; *(s + j) != '\0'; j++)
{
if (*(accept + i) == *(s + j))
{
index = index + 1;
}
			  
}
if (i == 0 && index == 0)
return (0);
i++;
}
return (0);
}
