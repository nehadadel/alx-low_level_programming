#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *argstostr - concatenates all the arguments of your program.
 *
 *@ac: integer number
 *@av: pointer to pointer char
 *
 *Return: char to pointer
*/
char *argstostr(int ac, char **av)
{
int i;
char **arr;

if (ac == 0 || av == NULL)
return(NULL);

arr = (char **)malloc(ac * sizeof(char *));
if (arr == NULL)
return (NULL);

for (i = 0; i < ac; i++)
arr[i] = av[i];
return(*arr);
}
