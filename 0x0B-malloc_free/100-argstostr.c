#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/***/
char *argstostr(int ac, char **av)
{
int i, j;
int **arr;

if (ac == 0 || av == NULL)
return(NULL);

arr = (char **)malloc(ac * sizeof(char *));
if (arr == NULL)
return (NULL);

 for (i = 0; i < ac; i++)
   arr[i] = av[i];
 return(arr);
}
