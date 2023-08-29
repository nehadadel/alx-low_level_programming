File Edit Options Buffers Tools C Help                                                                                                       
#include "main.h"
/***/
char *_strstr(char *haystack, char *needle)
{
int i, j;
char *p;

i = 0;
j = 0;

while (*(needle + i) != '\0')
{
while (*(haystack + j) != '\0')
{
if (*(needle) == *(haystack + j) && i == 0)
{
p = haystack + j;;
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
return (p);
}
